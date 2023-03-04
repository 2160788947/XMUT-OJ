#include <iostream>
using namespace std;

int main()
{
	int i, N, ans, t;
	cin >> N >> ans;
	for (i = 1; i < N; i++) cin >> t, ans ^= t;
	if (ans) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
