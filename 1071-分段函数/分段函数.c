#include<stdio.h>
#include<math.h>
int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x < 1)
	{
		y = x + 1;
	}
	else if(x>=1&&x<=3)
	{
		y = 2 * sqrt(x) - 1;
	}
	else
	{
		y = cos(x + 3);
	}
	printf("%.2f", y);
	return 0;
}