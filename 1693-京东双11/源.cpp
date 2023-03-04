#include<iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	n -= 100 * (n / 1000);
	if (m)
	{
		if (n >= 3800)
			n -= 300;
	}
	printf("%.2lf", (double)n);
	return 0;
}