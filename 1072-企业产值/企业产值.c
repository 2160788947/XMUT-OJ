#include<stdio.h>
int main()
{
	double x,y=1;
	int year=0;
	scanf("%lf", &x);
	while (y < 2)
	{
		y *= (1 + x);
		year++;
	}
	printf("%d", year);
	return 0;
}