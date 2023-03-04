#include<stdio.h>
int max(int m, int n)
{
	return m > n ? m : n;
}

int f(int n)
{
	int t;
	if (n == 0)
	{
		return 1;
	}
	else if (n < 10)
	{
		return n;
	}
	else
	{
		t = n % 10;
		return max(f(n / 10) * t, f((n / 10) - 1) * 9);
	}
}
int main()
{
	int result,n;
	scanf("%d", &n);
	result = f(n);
	printf("%d", result);
	return 0;
}

