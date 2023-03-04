#include<stdio.h>
#include<string.h>
int main()
{
	int x[50] = {0}, n, i,k;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &x[i]);
	}
	scanf("%d", &k);
	for (i = n+1;i>k-1;i--)
	{
		x[i] = x[i - 1];
	}
	scanf("%d", &x[i]);
	for (i = 0;i <= n;i++)
	{
		printf("%d", x[i]);
		if(i==n+1){}
		else { printf(" "); }
	}
	return 0;
}
