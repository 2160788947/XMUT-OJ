#include<stdio.h>
#include<math.h>
int main()
{
	double y,x;
	scanf("%lf", &x);
	if (x < 1)
	{
		y = cos(x + 2);
	}
	else
	{
		y = sqrt(x-1);
	}
	printf("%.2f", y);
	return 0;

}