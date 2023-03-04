#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,cnt=0;
	char c[15] = {0};
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%s", c);
		if (strcmp(c, "click") == 0)
			cnt++;
		else if (strcmp(c, "doubleclick") == 0)
		{
			cnt = -1;
			break;
		}
	}
	if (cnt == -1)
	{
		printf("666");
	}
	else
	{
		printf("%d", cnt);
	}
	return 0;
}