#include<iostream>
using namespace std;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		long long N;
		cin >> N;
		N=((N + 1) * N / 2 + 4*N+5)% 1000000007;
		cout << N << endl;
	}
	return 0;
}