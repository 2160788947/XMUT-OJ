#include<stdio.h>
int main()
{
	int m, n,cnt=0,i,sum=0;
	scanf("%d %d", &m, &n);
	if (m < 2 || m > n)
	{
		printf("¡°ÊäÈëÊı¾İ´íÎó¡± ");
	}
	else
	{
		for (;m <= n;m++)
		{
			for (i = 2; i < m;i++)
			{
				if (m % i == 0)
				{
					break;
				}
			}
			if (i >= m)
			{
				cnt++;
				sum += m;
			}
		}
		printf("%d %d", cnt, sum);
	}
	return 0;
}