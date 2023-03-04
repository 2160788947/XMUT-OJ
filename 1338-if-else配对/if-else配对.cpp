#include<stdio.h>
#include<string.h>
char ch[20000][5];
int main()
{
	int n, i, j, l = 0, cnt = 1, count = 0, maxcount = 0;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%s", &ch[i]);
	}
	for (i = 0;i < n;i = j + 1)
	{
		if (strcmp(ch[i], "else") == 0 || strcmp(ch[n - 1], "if") == 0)
		{
			cnt = 0;
			break;
		}
		l = 0;
		for (j = i;j < n;j++)
		{
			if (strcmp(ch[j], "if") == 0)
			{
				l++;
				count++;
			}
			else if (strcmp(ch[j], "else") == 0)
			{
				l--;
			}
			if (l == 0)
			{
				maxcount = maxcount > count ? maxcount : count;
				count = 0;
				break;
			}
		}
		if (l != 0)
		{
			cnt = 0;
			break;
		}
	}
	if (cnt == 1)
	{
		printf("%d", maxcount - 1);
	}
	else
	{
		printf("NO");
	}
	return 0;
}
//¶ÑÕ»
#include<stdio.h>
#include<string.h>
int main() {
	int N, cnt = 0, count = 0, maxCount = 0;
	char str[5];
	scanf("%d", &N);
	while (N--) 
	{
		scanf("%s", &str);
		if (strcmp(str, "if") == 0) 
		{
			cnt++;
		}
		else {
			if (cnt != 0)
			{
				cnt--;
				if (cnt != 0) 
				{
					count++;
				}
				else 
				{
					maxCount = maxCount > count ? maxCount : count;
					count = 0;
				}
			}
			else 
			{
				cnt++;
			}
		}
	}
	if (cnt != 0)
		printf("NO");
	else
		printf("%d", maxCount);
	return 0;
}