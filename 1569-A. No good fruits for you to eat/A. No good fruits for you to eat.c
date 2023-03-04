#include<stdio.h>
int a[10005] = { 0 };
int main()
{
	int n,i,sum=0,max;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		max = a[i];
	}
	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] <= max)
		{
			sum += a[i];
			max = a[i] - 1;
		}
		else
		{
			sum += max;
			max--;
		}
		if (max == 0)
		{
			break;
		}
	}
	printf("%d", sum);
	return 0;
}