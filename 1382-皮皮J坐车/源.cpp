#include<iostream>
using namespace std;
#define ll long long

ll Pow(int a, int b) {
	ll r = 1, base = a;
	while (b != 0) {
		if (b % 2) 
			r = (r*base)%1000000007;
		base = (base*base) % 1000000007;
		b /= 2;
	}
	return r;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n, m, t;
		ll ans = 1,num1=1,num2=1,num3=1;
		cin >> n >> m;
		t = n + m;
		for (int i = 1; i <= n+m; i++)
		{
			num1 = (i*num1) % 1000000007;
		}
		for (int i = 1; i <= m; i++)
		{
			num2 = (i*num2) % 1000000007;
		}
		for (int i = 1; i <= n; i++)
		{
			num3 = (i * num3) % 1000000007;
		}
		ans = (num1 * Pow(num2, 1000000007 - 2) % 1000000007 * Pow(num3, 1000000007 - 2) % 1000000007) % 1000000007;
		cout << ans<<endl;
	}
	return 0;
}

//快速幂
//费马小定理
