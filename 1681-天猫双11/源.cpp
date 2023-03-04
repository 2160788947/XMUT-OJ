#include<iostream>
using namespace std;
int main()
{
	int n, m;
	double s;
	cin >> n >> m;
	n -= 30 * (n / 200);
	if (m)
	{
		s = n * 0.95;
	}
	else
	{
		s = n;
	}
	printf("%.2lf", s);
	return 0;
}