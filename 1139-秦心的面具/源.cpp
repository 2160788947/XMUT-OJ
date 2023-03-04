#include<iostream>
#include<queue>
using namespace std;
bool num[55][55][55] = { 0 };
int dx[] = { 0,0,1,0,0,-1 };
int dy[] = { 0,1,0,0,-1,0 };
int dz[] = { 1,0,0,-1,0,0 };
int K, A, B, C, T;
struct point {
	int x;
	int y;
	int z;
	int cnt;
	point(){}
	point(int x, int y, int z, int cnt)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		this->cnt = cnt;
	}
};
void bfs()
{
	queue<point>q;
	q.push(point(0, 0, 0, 0));
	num[0][0][0] = true;
	while (q.size())
	{
		point p = q.front();
		q.pop();
		if (p.cnt > T)
		{
			cout << -1 << endl;
			return;
		}
		if (p.x == A - 1 && p.y == B - 1 && p.z == C - 1)
		{
			cout << p.cnt << endl;
			return;
		}
		for (int i = 0; i < 6; i++)
		{
			int kx = p.x + dx[i];
			int ky = p.y + dy[i];
			int kz = p.z + dz[i];
			if (kx >= 0 && ky >= 0 && kz >= 0 && kx < A && ky < B && kz < C&&!num[kx][ky][kz])
			{
				num[kx][ky][kz] = true;
				q.push(point(kx, ky, kz, p.cnt + 1));	
			}
		}
	}
	cout << -1 << endl;
}
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> K;
	while (K--)
	{
		cin >> A >> B >> C>>T;
		for (int i = 0; i < A; i++)
		{
			for (int j = 0; j < B; j++)
			{
				for (int k = 0; k < C; k++)
				{
					cin >> num[i][j][k];
				}
			}
		}
		bfs();
	}
	return 0;
}