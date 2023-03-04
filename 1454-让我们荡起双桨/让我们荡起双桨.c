#include<stdio.h>
int main()
{
	int N[101] = { 0 }, W, n, i, j, t, cnt = 0;
	scanf("%d %d", &W, &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &N[i]);
	}
	for (i = 0;i < n - 1;i++)
	{
		for (j = 0;j < n - 1 - i;j++)
		{
			if (N[j] < N[j + 1])
			{
				t = N[j];
				N[j] = N[j + 1];
				N[j + 1] = t;
			}
		}
	}
	for (i = 0;i < n;i++)
	{
		for (;N[i] == 0;i++);
		for (j = i + 1;j <= n;j++)
		{
			for (;N[j] == 0&&j<n;j++);
			if (N[i] + N[j] <= W)
			{
				cnt++;
				N[i] = 0;
				N[j] = 0;
				break;
			}
			else if (j == n)
			{
				cnt++;
				break;
			}

		}
	}
	printf("%d", cnt * 10);
	return 0;
}