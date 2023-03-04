#include<iostream>
#include<queue>
using namespace std;
int block[4][2] = { -1,0,1,0,0,-1,0,1 };
int n, m;
char map[15][15] = { 0 };
int x[15] = { 0 };
int y[15] = { 0 };
struct point
{
    point(int a, int b, int c): x(a), y(b), cnt(c){};  
    int x,y,cnt;
    friend bool operator<(point a, point b)
    {
        return a.cnt > b.cnt;
    }
};

int bfs(int ax,int ay,int bx,int by)
{
    int flag[15][15] = { 0 };
    int cnt;
    priority_queue<point>Area;
    Area.push(point(ax,ay, 0));
    flag[ax][ay] = 1;
    while (Area.size() != 0)
    {
        point t = Area.top();
        Area.pop();
        if (t.x == bx && t.y == by)
        {
            return t.cnt;
        }
        for (int k = 0; k < 4; k++)
        {
            int cx = t.x + block[k][0];
            int cy = t.y + block[k][1];
            if (cx < 0 || cy < 0 || cx >= n || cy >= m)
                continue;
            if (flag[cx][cy] == 0 && map[cx][cy] != 'X')
            {
                if (map[cx][cy] == 'T')
                    cnt = 4;
                else if (map[cx][cy] == '0')
                    cnt = 1;
                else if (map[cx][cy] == '#')
                    cnt = 2;
                Area.push(point(cx, cy, t.cnt + cnt));
                flag[cx][cy] = 1;
            }
        }
    }
    return 0;
}
int main()
{
    int T, i, j;
	cin >> T;
    while (T--)
    {
        char c;
        int tx, ty,ex,ey, sum = 0,cnt=1;
        cin >> n >> m;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> map[i][j];
            }
        }
        while (true)
        {
            cin >> c;
            if (c == '*')
                break;
            cin >> tx >> ty;
            tx--, ty--;
            if (c == 'S')
            {
                x[0] = tx;
                y[0] = ty;
            }
            else if (c == 'E')
            {
                ex = tx;
                ey = ty;
            }
            else
            {
                x[c - '0'] = tx;
                y[c - '0'] = ty;
                cnt++;
            }
        }
        x[cnt] = ex,y[cnt] = ey;
        for (i = 0; i < cnt; i++)
            sum += bfs(x[i], y[i], x[i + 1], y[i + 1]);
        cout << sum << endl;
	}
	return 0;
}