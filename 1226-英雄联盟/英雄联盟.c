#include<stdio.h>
int main()
{
	int x, y, m, M, L,t;
	while (scanf("%d%d%d%d%d", &x, &y, &m, &M, &L) != EOF)
	{
		int time = 0,cd=5;
		while (L > 0)
		{
			if (y > x)
			{
				if (M - m > 0 && cd % 5 == 0)
				{
					L -= y;
					time++;
					M -= m;
					cd = 1;
				}
				else
				{
					L -= 4 * x;
					cd += 4;
					time += 4;
					if (L < 0)
					{
						t = 0 - L;	
						time -= t/x;
					}
				}
			}
			else
			{
				t = L / x;
				L-= t*x;
				time += t;
				if (L > 0)
				{
					L -= x;
					time++;
				}
			}
		}
		printf("%d\n", time);
	}
	return 0;
}