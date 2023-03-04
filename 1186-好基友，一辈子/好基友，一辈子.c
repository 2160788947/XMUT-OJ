#include<stdio.h>
int main()
{
	int n, s, x, y, cnt[100] = {0}, i = 0, t = 250000;
	scanf("%d %d", &n, &s);
	for (x = 1;x <= n;x++)
	{
		for (y = 1;y <= n;y++)
		{
			if (x * y == s && x + y <= n)
			{
				cnt[i] = x + y;
				i++;
			}
		}
	}
	for (s = 0;s < i-1;s++)
	{
		if (t >cnt[s] )
		{
			t = cnt[s];
		}
	}
	printf("%d", (n-t)/2);
	return 0;
}
