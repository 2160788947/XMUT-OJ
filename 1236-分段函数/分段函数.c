#include<stdio.h>
#include<math.h>
int main()
{
	double x, y;
	scanf("%lf", &x);
	if (x <= -3)
	{
		y = 4 / x;
	}
	else if (x > -3 && x < 3)
	{
		y = x * x;
	}
	else
	{
		y = sqrt(x);
	}
	printf("%.3f", y);
	return 0;
}