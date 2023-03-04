#include<stdio.h>
int main()
{
	double x;
	scanf("%lf", &x);
	if (x <= 10&&x>=1)
	{
		x = 2 * x - 1;
	}
	else if(x>=10)
	{
		x = x * x - 11;
	}
	printf("%.2f", x);
}