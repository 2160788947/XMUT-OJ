#include<iostream>
#include<algorithm>
using namespace std;
int dp[100005][105] = { 0 };
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
	int N,S;
	while (cin >> N >> S)
	{
		int max_time = 0;
		fill(dp[0], dp[0] + 100002 * 102, 0);
		fill(dp[0], dp[0] + 101, -0x3f3f3f);
		dp[0][S] = 0;
		for (int i = 0; i < N; i++)
		{
			int time, pos;
			read(time);
			read(pos);
			max_time = max(max_time, time);
			dp[time][pos]++;
		}
		for (int i = 1; i <= max_time; i++)
		{
			for (int j = 0; j <= 100; j++)
			{
				if (j == 0)
					dp[i][j] += max(dp[i - 1][j], dp[i - 1][j + 1]);
				else if (j == 100)
					dp[i][j] += max(dp[i - 1][j], dp[i - 1][j - 1]);
				else
				{
					int t = max(dp[i - 1][j + 1], dp[i - 1][j - 1]);
					t = max(dp[i - 1][j], t);
					dp[i][j] += t;
				}
			}
		}
		cout << *max_element(dp[max_time], dp[max_time] + 101)<<endl;
	}
	return 0;
}