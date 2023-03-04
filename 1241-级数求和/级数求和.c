#include<stdio.h>
int main()
{
	int i, n;
	double sum = 1, k = 1;
	scanf("%d", &n);
	for (i = 2;i <= n;i++)
	{
		sum += (k * (1.0 / i));
		k = -k;
	}
	printf("%.2f", sum);
	return 0;
}