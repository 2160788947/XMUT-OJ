//#include<iostream>
//using namespace std;
//int dp[105][105] = { 0 };
//int sum[105] = { 0 };
//int main()
//{
//	int N;
//	int i, j, k, t, s = 0, l;
//	cin >> N;
//	memset(dp, 0x3f3f3f, 105 * 105 * sizeof(int));
//	for (i = 1; i <= N; i++)
//	{
//		cin >> sum[i];
//		dp[i][i] = 0;
//		sum[i] += sum[i - 1];
//	}
//	for (l = 2; l <= N; l++)
//	{
//		for (i = 1; i + l - 1 <= N; i++)
//		{
//			j = i + l - 1;
//			for (k = i; k < j; k++)
//			{
//				dp[i][j] = min(dp[i][k] + dp[k + 1][j] + sum[j] - sum[i - 1], dp[i][j]);
//			}
//		}
//	}
//	cout << dp[1][N]<<endl;
//	memset(dp, -0x3f3f, 105 * 105 * sizeof(int));
//	for (i = 1; i <= N; i++)
//	{
//		dp[i][i] = 0;
//	}
//	for (l = 2; l <= N; l++)
//	{
//		for (i = 1; i + l - 1 <= N; i++)
//		{
//			j = i + l - 1;
//			for (k = i; k < j; k++)
//			{
//				dp[i][j] = max(dp[i][k] + dp[k + 1][j] + sum[j] - sum[i - 1], dp[i][j]);
//			}
//		}
//	}
//	cout << dp[1][N]<<endl;
//	return 0;
//}
