#include<stdio.h>
#include<stdlib.h>
int num[250000] = { 0 };
int s[1000] = { 0 };
int main()
{
	int n, m,i,t=0;
	scanf("%d %d", &n, &m);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num[i]);
		t += num[i];
		if (i % 100 == 0)
		{
			s[i / 100] = t;
			t = 0;
		}
	}
	while (m--)
	{
		int l, j,sum=0,k,o;
		scanf("%d %d", &l, &j);
		if (l == j)
		{
			sum = num[l];
		}
		else
		{
			if (j - l > 200)
			{
				k = ((l / 100) + 1);
				o = ((j / 100));
				for (i = l; i <= k*100; i++)
				{
					sum += num[i];
				}
				for (i = j; i > o * 100; i--)
				{
					sum += num[i];
				}
				for (i = k+1; i <= o; i++)
				{
					sum += s[i];
				}
			}
			else
			{
				for (i = l; i <= j; i++)
				{
					sum += num[i];
				}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}