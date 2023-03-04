#include<iostream>
#include<queue>
using namespace std;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };
int W, H, N;
int cnt = 0;
struct point {
	int x;
	int y;
	point* pre;
	point(int x, int y, point* pre)
	{
		this->x = x;
		this->y = y;
		this->pre = pre;
	}
	point() {}
};
void bfs(int x, int y, bool** map, bool** use)
{
	queue<point>q;
	point* s = new point[H * W]();
	q.push(point(x, y,NULL));
	int count = 0;
	while (q.size())
	{
		point p = q.front();
		s[count] = p;
		q.pop();
		if (p.y == H - 1)
		{
			cnt++;	
			while (p.pre!=NULL)
			{
				map[p.y][p.x] = false;
				p = *p.pre;
			}
			return;
		}
		for (int i = 0; i < 4; i++)
		{
			int kx = p.x + dx[i];
			int ky = p.y + dy[i];
			if (kx >= 0 && kx < W && ky >= 0 && ky < H && use[ky][kx])
			{
				use[ky][kx] = false;
				q.push(point(kx, ky, &s[count]));
			}
		}
		count++;
	}
	return;
}

int main()
{
	cout << 65536 * 1024 / sizeof(bool);
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	int i,j;	
	int x1, x2, y1, y2;
	cin >> W >> H >> N;
	bool** use = new bool* [H];
	bool** map = new bool* [H];
	for (i = 0; i < H; i++)
	{
		map[i] = new bool[W];
		memset(map[i], 1, W* sizeof(bool));
		use[i] = new bool[W];
		memset(use[i], 1, W * sizeof(bool));
	}

	while (N--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		for (i=y1; i <= y2; i++)
		{
			for (j=x1; j <= x2; j++)
			{
				map[i][j] = false;
			}
		}
	}
	for (i = 0; i < W; i++)
	{
		for (int a = 0; a < H; a++)
		{
			for (int b = 0; b < W; b++)
			{
				cout << map[a][b] << " ";
			}
			cout << endl;
		}
		cout << endl;
		memcpy(use, map, H * W * sizeof(bool));
		map[0][1] = false;
		if (map[0][i])
			bfs(0, i, map, use);
	}
	cout << cnt;
	return 0;
}