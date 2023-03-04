#include<stdio.h>
int main()
{
	int n, k, i, distance[101] = {0}, judge = 0, t, cnt = -1;//cnt=-1是因为刚出发不算加油
	scanf("%d %d", &n, &k);
	t = n;
	for (i = 0;i <= k; i++)
	{
		scanf("%d", &distance[i]);
	}
	for (i = 0;i <= k;)
	{
		if (n < distance[i])
		{
			judge = 1;
			break;
		}
		else
		{
			while(i<=k)
			{
				n -= distance[i];
				if (n < 0)
					break;
				i++;
			}
			n = t;
			cnt++;
		}
	}
	if (judge == 1)
		printf("No Solution");
	else
		printf("%d", cnt);
	return 0;
}