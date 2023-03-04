#include<iostream>
#include<queue>
using namespace std;
int h = 10, w = 10;
int block[4][2] = { -1,0,1,0,0,-1,0,1 };
char p[10][10] = { 0 };
int ax[7] = { 0 };
int ay[7] = { 0 };
struct point
{
    point(int a, int b, int c)
        : x(a)
        , y(b)
        , cnt(c)
    {
    };
    int y;
    int x;
    int cnt;
};
int bfs(int l, int j)
{
    int cx, cy, k;
    int flag[10][10] = { 0 };
    queue<point>Area;
    Area.push(point(ax[l], ay[l],0));
    flag[ax[l]][ay[l]] = 1;
    while (Area.size() != 0)
    {
        point t = Area.front();
        Area.pop();
        if (t.x == ax[j] && t.y == ay[j])
        {
            return t.cnt;
        }
        for (k = 0; k < 4; k++)
        {
            cx = t.x + block[k][0];
            cy = t.y + block[k][1];
            if (cx < 0 || cy < 0 || cx >= w || cy >= h)
                continue;
            if (flag[cx][cy]==0&&p[cx][cy]!='#')
            {
                Area.push(point(cx, cy,t.cnt+1));
                flag[cx][cy] = 1;
            }
        }
    }
    return 0x3f3f3f;
}

int main()
{
    int i, j, l;
    int T;
    cin >> T;
    while (T--)
    {
        int Min = 0x3f3f3f;
        for (i = 0; i < h; i++)
        {
            for (j = 0; j < w; j++)
            {
                cin >> p[i][j];
                if (p[i][j] == 'A')
                {
                    ax[0] = i;
                    ay[0] = j;
                }
                else if (p[i][j] > '0' && p[i][j] <= '6')
                {
                    ax[p[i][j] - '0'] = i;
                    ay[p[i][j] - '0'] = j;
                }
            }
        }

        for (i = 1; i < 7; i++)
        {
            for (j = 1; j < 7; j++)
            {
                if(i!=j)
                Min = min(Min, bfs(0,i)+bfs(i,j));
            }
        }
        cout << Min << endl;
    }
    return 0;
}