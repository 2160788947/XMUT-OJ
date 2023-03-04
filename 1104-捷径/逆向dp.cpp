#include<iostream>;
using namespace std;
int main()
{
	int n, i, j, dp[15][15] = { 0 };
	cin >> n;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= i; j++)
			cin >> dp[i][j];
	for (i = n-1; i >=1;i--)
		for (j = 1; j <=i; j++)
			dp[i][j] += min(dp[i + 1][j], dp[i + 1][j + 1]);
	cout << dp[1][1];
	return 0;
}
