#include<stdio.h>
int main()
{
	int a[1000] = { 1000001 }, n, i, hh[1000] = {0}, l;
	scanf("%d", &n);
	
	for (i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 1;i <= n;i++)
	{
		for (l = i-1;a[i]>a[l];l--)
		{
			hh[i]++;
			if (l == 0)
				break;
		}
		printf("%d", hh[i]+1);
		if (i % n != 0)
		{
			printf(" ");
		}
	}
	return 0;
}