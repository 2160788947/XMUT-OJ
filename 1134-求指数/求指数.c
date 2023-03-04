#include<stdio.h>
#include<math.h>
int main()
{
	int i,k, factorial;
	double x1,x2=1,end=1,sum=1;
	scanf("%lf", &x1);
	for (i = 1;end > 10e-5;i++)
	{
		x2 *= x1;
		factorial = 1;
		for (k = 1; k <= i;k++)
		{
			factorial *= k;
		}
		end = x2 / factorial;
		sum += end;
	}
	printf("%.3lf", sum);
	return 0;
}
