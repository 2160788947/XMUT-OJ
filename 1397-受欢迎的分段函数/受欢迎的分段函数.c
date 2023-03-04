#include<stdio.h>
int main()
{
	int x;
	double y;
	scanf("%d", &x);
	if (x > 150 && x <= 10000)
	{
		x = x - 150;
		y = (1.0 / 3.0)*x;
	}
	else if(x>10000)
	{
		x = x - 10000;
		y = (3.0 / 5.0) * x+9850/3.0;
	}
	else
	{
		y = 0;
	}
	printf("%.2f", y);
	return 0;
}