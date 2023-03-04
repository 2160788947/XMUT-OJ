#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, i, j, mn, mx;
	int a[1005] = {0},dp[1005] = {0};
	scanf("%d", &n);
	for (i = 1; i <= n; ++i)
	{
		scanf("%d", &a[i]);
		mn = mx = a[i];
		for (j = i; j > 0; --j)
		{
			mn = min(mn, a[j]);
			mx = max(mx, a[j]);
			dp[i] = max(dp[j - 1] + (mx - mn) * (mx - mn), dp[i]);
		}
	}
	printf("%d\n", dp[n]);
	return 0;	
}