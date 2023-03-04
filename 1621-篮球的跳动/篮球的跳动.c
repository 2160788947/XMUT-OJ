#include<stdio.h>
int main()
{
	double h,sum;
	int n,i;
	scanf("%lf %d", &h, &n);
	sum = h;
	for (i = 0;i < n-1;i++)
	{
		h /= 2;
		sum += 2 * h;
	}
	printf("%.2lf %.2lf", sum, h/2);
	return 0;
}