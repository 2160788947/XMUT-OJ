#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char c[50];
	scanf("%s", c);
	for (i = 0;c[i] != '\0';i++)
		printf("%c", c[i]);
	for(i=i-1;i>=0;i--)
		printf("%c", c[i]);
	return 0;
}