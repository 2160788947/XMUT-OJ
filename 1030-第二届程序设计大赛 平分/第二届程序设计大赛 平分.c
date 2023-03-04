#include<stdio.h>
int main()
{
	int n, i, x[6] = { 1,2,3,4,5,6 }, k[6], o = 5;
	scanf("%d", &n);
	while (n--)
	{
		int a = 0, b = 0;
		for (i = 0;i < 6;i++)
		{
			scanf("%d", &k[i]);
		}
			for(i=0;i<6;)
			{
				if (k[5 - i] == 0)
				{
					i++;
					continue;
				}
				if (a >= b)
				{
					b += x[5-i];
					k[5-i]--;
				}
				else
				{
					a += x[5-i];
					k[5 - i]--;
				}

			}
		if (a == b)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
