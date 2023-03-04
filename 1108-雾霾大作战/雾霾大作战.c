#include<stdio.h>
int num[55][55] = { 0 };
int dp[55][55] = { 0 };
int min(int a, int b)
{
	return a < b ? a : b;
}
int main()
{
	int n,i,j,k;
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		for (j = 1; j <= n-i; j++)
		{
			scanf("%d", &num[i][j]);
			dp[i][i + j] = num[i][j];
		}
	}
	for (i = 1; i < n; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			for (k=i+1;k<j;k++)
			{
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
			}
		}
	}
	printf("%d", dp[1][n]);
	return 0;
}