#include<stdio.h>
#include<string.h>
int main()
{
	char color[15][100];
	int n, i, cnt[100] = {0}, j, k;
	scanf("%d", &n);//气球个数
	for (i = 0;i < n;i++)
	{
		scanf("%s", &color[i]);//输入气球颜色
	}
	for (i = 0;i < n-1;i++)
	{
		for (j = i + 1;j < n;j++)
		{
			if (strcmp(color[i], color[j]) == 0)
			{
				cnt[i]++;//判断相同颜色的气球,并计数
			}
		}
	}
	for (i = 0,j=0;i < n;i++)
	{
		if (cnt[i] > j)
		{
			k = i;//找到数量最多的气球
		}
	}
	printf("%s", &color[k]);
	return 0;
}