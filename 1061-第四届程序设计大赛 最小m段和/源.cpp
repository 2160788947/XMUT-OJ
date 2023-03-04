#include<iostream>
using namespace std;
int dp[205][205];
int main()
{
	int n, m;
	int i,j,k;
	cin >> n >> m;
	for (i = 1; i <= n; i++)
	{
		cin >> dp[i][1];
		dp[i][1] += dp[i-1][1];
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i&&j<=m; j++)
		{
			int Min = 0x3f3f3f;
			for (k = 1; k < i; k++)
			{
				int temp = max(dp[i][1] - dp[k][1], dp[k][j - 1]);
				Min = min(Min, temp);
			}
			dp[i][j] = Min;
		}
	}
	cout << dp[n][m];
	return 0;
}