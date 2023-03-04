#include<stdio.h>
int main()
{
	int i;
	char str[100] = { 0 };
	gets(str);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != str[i + 1])
		{
			printf("%c", str[i]);
		}
	}
	return 0;
}