#include<stdio.h>

int main()
{
	int m,n;
	double y=0,i;
	scanf("%d", &m);
	n = 2 * m + 1;
	for (i = 1;i <= n;i += 2)
	{
		y += (1 / i);
	}
	printf("%.6f", y);
	return 0;
}
