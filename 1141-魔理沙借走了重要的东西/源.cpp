#include <iostream>
using namespace std;
const int mod = 1000000007;
int main(void)
{
	long long n;
	while (cin >> n && n)
	{
		long long ans = n * n * n - n;
		if (n >= 3)
			ans -= n * (n - 1) * (n - 2) / 2;
		cout << ans % mod * 35 % mod << endl;
	}
}
