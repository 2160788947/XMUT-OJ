#include<stdio.h>
int factorial(int a);
int main()
{
	int m, k, n;
	scanf("%d", &m);
	while (m--)
	{
		k = 10;
		scanf("%d", &n);
		do
		{
			if (n >= factorial(k))
			{
				n = n - factorial(k);
			}
			if (n == 0)
			{
				printf("Yes\n");
				break;
			}
		} while (k--, k>0);
		if (n != 0)
		{
			printf("No\n");
		}
	}
	return 0;
}
int factorial(int a)
{
	int sum=0,i,k=1;
	for (i = 1;i <= a;i++)
	{
		k *= i;
	}
	return k;
}