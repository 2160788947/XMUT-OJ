#include<stdio.h>
int main()
{
	int T, n, m, k, judge, l = 0, cnt, count;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d", &n, &m, &k);
		count = 0;
		cnt = 0;
		while (n--)
		{
			scanf("%d", &judge);
			switch (judge)
			{
			case 1:l = -10;
				break;
			case 2:l = -5;
				break;
			case 3:l = -5;
				break;
			case 4:l = -3;
				break;
			case 5:l = 20;
			}
			if (m + l < 0)
			{
				if (k > 0)
				{
					k--;
					m = 100;
					count++;
				}
				else
				{
					cnt = 1;
				}
			}
			m += l;
			if (m > 100)
			{
				m = 100;
			}
		}
		if (cnt == 1)
		{
			printf("Pdddddd is crazy.\n");
		}
		else
		{
			printf("%d\n", count);
		}
	}
	return 0;
}