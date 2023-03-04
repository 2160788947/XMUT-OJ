#include<iostream>
#include<queue>
using namespace std;
char map[1005][1005] = { 0 };
int dp[1005][1005][2] = { 0 };
int N, M, K, X, Y;
#define mod 10007
//×ó1 ÏÂ0
int main()
{
	int N, M, K, X, Y;
	cin >> N >> M >> K >> X >> Y;
	while (K--)
	{
		int x, y;
		cin >> x >> y;
		map[x][y] = 1;
	}
	for (int i = 1; i <= N; i++)
		map[i][M + 1] = 1;
	for (int i = 1; i <= M; i++)
		map[N+1][i] = 1;
	if (!map[1][2])
		dp[1][2][1] = 1;
	if (!map[2][1])
		dp[2][1][0] = 1;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			if (i == 1 && j == 1)
				continue;
			if (dp[i][j][0])
			{
				if (!map[i + 1][j])
					dp[i + 1][j][0] = (dp[i + 1][j][0] + dp[i][j][0]) % mod;
				if (!map[i + 1][j] && !map[i][j + 1])
					dp[i][j + 1][1] = (dp[i][j + 1][1] + dp[i][j][0]) % mod;
			}
			if (dp[i][j][1])
			{
				if (!map[i][j + 1])
					dp[i][j + 1][1] = (dp[i][j + 1][1] + dp[i][j][1]) % mod;
				if (!map[i + 1][j] && !map[i][j + 1])
					dp[i + 1][j][0] = (dp[i + 1][j][0] + dp[i][j][1]) % mod;
			}
		}
	}
	cout << (dp[X][Y][0]+dp[X][Y][1])%mod;
	return 0;
}
