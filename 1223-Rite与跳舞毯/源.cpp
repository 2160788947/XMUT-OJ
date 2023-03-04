#include<iostream>
using namespace std;
#define INF 0x3f3f3f3f
int cost(int a, int b)
{
	if (a == 0)
		return 2;
	else if (a == b)
		return 1;
	else if (abs(a - b) == 2)
		return 4;
	else
		return 3;
}
void read(int& x) {
	x = 0;
	char c = getchar();
	while (c < '0' || c>'9')c = getchar();
	while (c >= '0' && c <= '9') {
		x = x * 10 + c - '0';
		c = getchar();
	}
}
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, a, now = 0;
		int dp[5][5][2];
		cin >> n;
		memset(dp, INF, sizeof(dp));
		dp[0][0][now] = 0;
		while (n--)
		{
			read(a);
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (dp[i][j][now] != INF)
					{
						if (j != a)
							dp[a][j][now ^ 1] = min(dp[i][j][now] + cost(i, a), dp[a][j][now ^ 1]);
						if (i != a)
							dp[i][a][now ^ 1] = min(dp[i][j][now] + cost(j, a), dp[i][a][now ^ 1]);
					}
				}
			}
			for (int i = 0; i < 5; i++)
				for (int j = 0; j < 5; j++)

					dp[i][j][now] = INF;
			now ^= 1;
		}
		int res = INF;
		for (int i = 0; i < 5; i++)
			for (int j = 0; j < 5; j++)
				res = min(res, dp[i][j][now]);
		cout << res << endl;
	}
	return 0;
}