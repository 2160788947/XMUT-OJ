#include<stdio.h>
#include<string.h>
int f(int c[][2], int cnt[][2],int n)
{
	int i,j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 2; j++)
		{
			if (c[i][j] != cnt[i][j])
			{
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int n, i, j, cnt[10][2] = { 0 }, c[10][2] = { 0 },t;
	char T[10][10] = { 0 },L[10][10] = { 0 };
	scanf("%d ", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%c", &T[i][j]);
			if (T[i][j] == 'O')
			{
				cnt[i][0]++;
			}
			else
			{
				cnt[i][1]++;
			}
		}
		getchar();
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%c", &L[i][j]);
		}
		getchar();
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (L[i][j] == 'O')
			{
				c[i][0]++;
			}
			else
			{
				c[i][1]++;
			}
		}
	}
	if (f(c, cnt, n))
	{
		printf("YES");
		return 0;
	}
	memset(c, 0, sizeof(c));
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (L[i][j] == 'O')
			{
				c[j][0]++;
			}
			else
			{
				c[j][1]++;
			}
		}
	}
	if (f(c, cnt, n))
	{
		printf("YES");
		return 0;
	}
	memset(c, 0, sizeof(c));
	t = 0;
	for (j = n-1; j >=0; j--)
	{
		for (i = 0; i < n; i++)
		{

			if (L[i][j] == 'O')
			{
				c[t][0]++;
			}
			else
			{
				c[t][1]++;
			}
		}
		t++;
	}
	if (f(c, cnt, n))
	{
		printf("YES");
		return 0;
	}
	memset(c, 0, sizeof(c));
	t = 0;
	for (i = n-1; i >=0; i--)
	{
		for (j = 0; j < n; j++)
		{
			if (L[i][j] == 'O')
			{
				c[t][0]++;
			}
			else
			{
				c[t][1]++;
			}
		}
		t++;
	}
	if (f(c, cnt, n))
	{
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}