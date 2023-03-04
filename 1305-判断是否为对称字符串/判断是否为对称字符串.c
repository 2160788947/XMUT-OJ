#include<stdio.h>
int main()
{
	int i,k=0,l=1;
	char c[100];
	gets(c);
	for (i = 0;c[i] != '\0';i++);
	while (c[k++] != c[--i])
	{
		l = 0;
	}
	if (l == 0)
	{
		printf("No");
	}
	else
	{
		printf("Yes");
	}
	return 0;
}