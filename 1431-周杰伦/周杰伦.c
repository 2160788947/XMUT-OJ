#include<stdio.h>
int main()
{
	int m, n, price[100] = {0}, i,t,j,sum=0,k=2,cnt=0;
	scanf("%d %d", &m, &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &price[i]);
	}
	for (i = 0;i < n-1;i++)
	{
		for (j = 0;j < n - i;j++)
		{
			if (price[j] < price[j + 1])
			{
				t = price[j];
				price[j] = price[j + 1];
				price[j + 1] = t;
			}
		}
	}
	for (i = 0;i < m;i++)
	{
		sum += price[i];
	}
	for (;i < n;i++)
	{
		sum += k * price[i];
		cnt++;
		if (cnt % m == 0)
		{
			k++;
		}
	}
	printf("%d", sum);
	return 0;
}