//#include<iostream>
//using namespace std;
//#define ll long long
//ll num[1000] = { 0 };
//ll dp[1000][1000] = { 0 };
//ll dfs(int l, int r,bool cnt)
//{
//	ll ans;
//	if (dp[l][r])
//		return dp[l][r];
//	if (l == r && cnt)	
//		return num[l];
//	else if(l == r && !cnt)
//		return 0;
//	if(cnt)
//		ans=max(dfs(l + 1, r,!cnt) + num[l], dfs(l, r - 1,!cnt) + num[r]);
//	else
//		ans=min(dfs(l + 1, r, !cnt), dfs(l, r - 1, !cnt));
//	return dp[l][r] = ans;
//}
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		ll sum = 0,t;
//		cin >> n;
//		fill(num, num + 1000, 0 );
//		fill(dp[0], dp[0] + 1000*1000, 0);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> num[i];
//			sum += num[i];
//		}
//		t = dfs(0, n - 1, true);
//		cout << t <<" "<< sum- t << endl;
//	}
//}