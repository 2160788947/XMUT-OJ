#include<stdio.h>
int main()
{
	int n, i;
	double num, sum = 0;
	scanf("%d\n", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%lf", &num);
		sum += num;
	}
	sum = sum / n;
	printf("%.2f", sum);
	return 0;
}