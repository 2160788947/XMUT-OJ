#include<stdio.h>
#include<math.h>
int main()
{
	double y;
	int x;
	scanf("%d", &x);
	if (x > 1 && x < 100 && x % 2 == 0)
	{
		y = sin(x + 2);
	}
	else if (x > 100 && x % 2 != 0)
	{
		y = 2 * sqrt(x - 1);
	}
	else
	{
		y = x;
	}
	printf("%.2f", y);
	return 0;
}