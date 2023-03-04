#include<stdio.h>
int main()
{
	int i;
	char c[50];
	gets(c);
	for (i = 0;c[i] != '\0';i++)
	{
		if ((c[i] >= 'A' && c[i] <= 'Z'))
		{
			c[i] += 32;
		}
	}
	printf("%s", c);
	return 0;
}
