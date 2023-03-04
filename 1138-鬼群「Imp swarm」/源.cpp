#include<iostream>
using namespace std;

int main()
{
	int n, k, m, x;
	while (true)
	{
		cin >> n >> k >> m >> x;
		int cnt = n,s=0;
		if (!n && !k && !m && !x)
			break;
		for (int i = 2; i < n; i++)
		{
			s = (s + k) % i;
		}
		s = (s + m) % n;
		if (x == s + 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
