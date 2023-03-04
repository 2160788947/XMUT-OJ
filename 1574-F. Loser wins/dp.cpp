#include <iostream> 
#include <algorithm> 
using namespace std; 
typedef long long ll; 
typedef unsigned long long ull;
ll dp[1005][1005],arr[1005];
ll sum[1005]; ll hikari, pd;
int n; 
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		memset(dp, 0, sizeof(ll) * 1005 * 1005);
		memset(arr, 0, sizeof(ll) * 1005);
		hikari = pd = 0;
		cin >> n;
		for (int i = 1; i <= n; ++i)
		{
			cin >> arr[i];
			sum[i] = sum[i - 1] + arr[i];
			dp[i][i] = arr[i];
		}
		//for (int i = 1; i < n; ++i)
		//{
		// 
		//	for (int j = 1; j < n - i + 1; ++j)
		//	{
		//		dp[j][j + i] = sum[j + i] - sum[j - 1] - min(dp[j + 1][j + i], dp[j][j + i - 1]);
		//	}
		//}
		for (int i = 1; i < n; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if(i!=j)
				dp[i][j] = sum[j] - sum[i - 1] - min(dp[i + 1][j], dp[i][j - 1]);
			}
		}
		cout << dp[1][n] << " " << sum[n] - dp[1][n] << endl;
	}
	return 0;
}
