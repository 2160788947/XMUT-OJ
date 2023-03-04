#include<stdio.h>

int main()
{
	int x, l = -1;
	double y = 1, k, i;
	scanf("%d", &x);
	for (i = 2;i <= 100;i++)
	{
		l = -l;
		k = x / i;
		k = l * k;
		y += k;
	}
	printf("%.2f", y);
	return 0;
}