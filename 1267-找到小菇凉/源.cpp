#include<iostream>
#include<queue>
using namespace std;
struct point
{
	int x;
	int y;
	int cnt;
	point(int x, int y,int cnt)
	{
		this->x = x;
		this->y = y;
		this->cnt = cnt;
	}
	point()
	{
		this->x = 0;
		this->y = 0;
		this->cnt = 0;
	}
};
int main()
{
	int N, M;
	int i,j;
	cin >> N >> M;
	bool** flag = new bool* [N];
	char** num = new char*[N];
	int ac[4][2] = { 0,1,1,0,-1,0,0,-1 };
	queue<point>q;
	point A;
	for (i = 0; i < N; i++)
	{
		flag[i] = new bool[M];
		num[i] = new char[M];
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < M; j++)
		{
			flag[i][j] = false;
			cin >> num[i][j];
			if (num[i][j] == 'B')
			{
				q.push(point(i, j,0));
				flag[i][j] = true;
			}
			if (num[i][j] == 'A')
			{
				A.x = i;
				A.y = j;
			}
		}
	}

	while (q.size())
	{
		point p = q.front();
		q.pop();
		int cnt = 1;
		if (p.x == A.x || p.y == A.y)
		{
			int Minx = p.x, Miny = p.y;
			int Maxx = A.x, Maxy = A.y;
			if (p.x == A.x)
			{
				if (Maxy < Miny)
				{
					Miny = A.y;
					Maxy = p.y;
				}
				for (; Miny < Maxy; Miny++)
				{
					if (num[Minx][Miny] == '#')
					{
						cnt = 0;
						break;
					}
				}
			}
			else if (p.y == A.y)
			{
				if (A.x < p.x)
				{
					Minx = A.x;
					Maxx = p.x;
				}
				for (; Minx < Maxx; Minx++)
				{
					if (num[Minx][Miny] == '#')
					{
						cnt = 0;
						break;
					}
				}
			}
			if (cnt)
			{
				cout << p.cnt;
				return 0;
			}
		}
		for (i = 0; i < 4; i++)
		{
			int nx = p.x + ac[i][0], ny = p.y + ac[i][1];
			if (nx>=0&&nx<N&&ny>=0&&ny<M&&num[nx][ny]=='.'&&!flag[nx][ny])
			{
				q.push(point(p.x + ac[i][0], p.y + ac[i][1],p.cnt+1));
				flag[p.x + ac[i][0]][p.y + ac[i][1]] = true;
			}
		}
	}
	cout << "No!!!";
	return 0;
}