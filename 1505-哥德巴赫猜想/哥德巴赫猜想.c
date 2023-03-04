#include<stdio.h>
int prime(int i)
{
	int n;
	for (n = 2; n * n <= i; n++)
	{
		if (i % n == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i, n;
	scanf("%d", &n);
	for (i = 2; i <n; i++)
	{
		if (prime(i)&&prime(n - i))
		{
			printf("%d %d\n", i, n-i);
			return 0;
		}
	}
	return 0;
}