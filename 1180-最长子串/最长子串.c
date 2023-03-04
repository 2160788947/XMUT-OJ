#include<stdio.h>
#include<string.h>
char ch[100000] = { 0 };
int main()
{
	int n,l=0;
	scanf("%s", ch);
	scanf("%d", &n);
	while (n--)
	{
		char str[105] = { 0 };
		scanf("%s", str);
		if (!strstr(ch, str))
		{
			if (l < strlen(str))
			{
				l = strlen(str);
			}
		}
	}
	printf("%d", l);
	return 0;
}