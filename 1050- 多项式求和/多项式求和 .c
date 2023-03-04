#include<stdio.h>

int main()
{
	int m,n;
	double y = 1, i;
	scanf("%d", &m);
	for (i = 1;i <= m;i++)
	{
		n = 2 * i;
		y += (1.0 / n);
	}
	printf("%.2f", y);
	return 0;
}
