#include<stdio.h>
int main()
{
	char c[100] = {0};
	int t, i, k, cnt[100] = {0},l,num;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%s", c);
		l = 0;
		for (i = 0;c[i] != '\0';i++)
		{
			for (k = i;c[k] != '\0';k++)
			{
				if (c[i] = c[k])
					cnt[i]++;
			}
		}
		for (i = 0;i < 100;i++)
		{
			if (l < cnt[i])
			{
				l = cnt[i];
				num = i;
			}
		}
		printf("%c\n", c[num]);
	}

	return 0;
}