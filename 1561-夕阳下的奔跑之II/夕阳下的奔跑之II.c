#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, m[60] = { 0 }, t = 0, l = 0, foot = 0, result[60] = { 0 }, k, h = 0;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d", &m[i]);
	}
	for (i = 1;i < n - 1;i++)
	{
		int m1[60] = { 0 };
		foot = 0;
		for (l = 0;l < n;l++)
		{
			m1[l] = m[l];
		}
		for (k = i;k < n;k++)
		{
			m1[k] = m1[k + 1];
		}
		for (l = 0;l < n - 2;l++)
		{
			foot += abs(m1[l] - m1[l + 1]);
		}
		result[h++] = foot;
	}
	for (i = 0;i < h;i++)
	{
		if (result[i] < foot)
			foot = result[i];
	}
	printf("%d", foot);
	return 0;
}