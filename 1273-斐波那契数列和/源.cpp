#include<iostream>
using namespace std;
#define ll long long
ll a[200] = { 0 };
void init()
{
	a[1] = 1;
	a[2] = 1;
	for (int i = 3;; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
		if (a[i] > 1e18)
			break;
	}
}
int main()
{
	int n
	return 0;
}