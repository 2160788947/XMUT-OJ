#include<stdio.h>
int main()
{
	int x,l=-1;
	double i, y=0,k=1;
	scanf("%d", &x);
	for (i = 1;k >= 0.00001;i++)
	{
		l = -l;
		k = x / i;
		y += k * l;
	}
	printf("%.2f", y);
	return 0;
}