#include<stdio.h>
#include<string.h>
char c[205][205] = { 0 };
int main()
{
	int t, i, l, j;
	char ch[205] = { 0 }, head;
	scanf("%d", &t);
	while (t--)
	{
		memset(c, 0, sizeof(c));//≥ı ºªØ
		scanf("%s", c[0]);
		l = strlen(c[0]);
		for (i = 0; i < l-1; i++)
		{
			strcpy(c[i + 1], c[i]);
			head = c[i + 1][0];
			for (j = 0; j < l-1; j++)
			{
				c[i + 1][j] = c[i + 1][j + 1];
			}
			c[i + 1][l - 1] = head;
		}
		strcpy(ch, c[0]);
		for (i = 1; i < l; i++)
		{
			if (strcmp(ch, c[i]) == 1)
			{
				strcpy(ch,c[i]);
			}
		}
		printf("%s\n", ch);
	}
	return 0;
}