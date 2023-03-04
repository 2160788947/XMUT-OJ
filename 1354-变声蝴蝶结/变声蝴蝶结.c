#include<stdio.h>
int main()
{
	int n,i,l,t=0,k;
	scanf("%d", &n);
	for (i = 1;i <= n;i++)
	{
		for (k = 0;k < i;k++)
			printf("*");
		for (l = k;l < 2*n - i-1;l++)
			printf(" ");
		for (k = l;k < 2*n-1;k++)
			printf("*");
		printf("\n");
	}
	for (i = n-1;i >= 1;i--)
	{
		for (k = 0;k < i;k++)
			printf("*");
		for (l = k;l < 2 * n - i - 1;l++)
			printf(" ");
		for (k = l;k < 2 * n - 1;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}