#include<stdio.h>
int main()
{
	int t,m[10000],n,i,k=0,sum;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		sum = 0;
		for (i = 0;i < n;i++)
		{
			scanf("%d", &m[i]);
			sum += m[i];
		}
		for (i = 0;i < n;i++)
		{
			scanf("%d", &m[i]);
			if (m[i] > k)
				k = m[i];
		}
			if (k >= sum)
				printf("YES\n");
			else
				printf("NO\n");
	}
	return 0;
}