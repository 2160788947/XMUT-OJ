#include<stdio.h>
int main()
{
	double high = 100, sum=100;
	int n,i;
	scanf("%d", &n);
	for (i = 1;i < n;i++)
	{
		high /= 2;
		sum += high * 2;
	}
	printf("%.2lf %.2lf", sum, high/2);
	return 0;
}