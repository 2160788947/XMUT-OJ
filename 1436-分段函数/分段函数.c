#include<stdio.h>
int main()
{
	int m, n,i;
	double p=0, sum_m=1, sum_n=1,sum_i=1;
	scanf("%d,%d", &m, &n);
	if (m > n)
	{
		for (i = 1;i <= m;i++)
		{
			sum_m *= i;
		}
		for (i = 1;i <= n;i++)
		{
			sum_n *= i;
		}
		for (i = 1;i <= m-n;i++)
		{
			sum_i *= i;
		}
		p = sum_m / (sum_n * sum_i);
	}
	printf("%.2f", p);
	return 0;
}