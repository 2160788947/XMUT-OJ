#include<stdio.h>
int main()
{
	int n, i, time[101] = {0}, t, j, l, h, sum = 0;
	scanf("%d", &n);
	t = n;
	for (i = 0;i < n;i++)
	{
		scanf("%d", &time[i]);
	}
	for (i = 0; i < n - 1;i++)
	{
		for (j = 0;j < n - i - 1;j++)
		{
			if (time[j] > time[j + 1])
			{
				l = time[j];
				time[j] = time[j + 1];
				time[j + 1] = l;
			}
		}
	}
	for (h = 0;h < n-1;h++)
	{
		if (time[h] == 0)
			continue;
		time[h+1] = time[h] + time[h + 1];
		sum += time[h + 1];
		time[h] = 0;
		for (i = 0; i < n - 1;i++)
		{
			for (j = 0;j < n - i - 1;j++)
			{
				if (time[j] > time[j + 1])
				{
					l = time[j];
					time[j] = time[j + 1];
					time[j + 1] = l;
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}