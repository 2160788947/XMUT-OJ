#include<stdio.h>
int main()
{
	int i,count=0,t=0;
	char c[80];
	scanf("%s", c);
	for (i = 0;c[i] != '\0';i++)
	{
		if (c[i] == '#'&&t==0)
		{
			count++;
		}
		else
		{
			printf("%c", c[i]);
			t = 1;
		}
	}
	for (i = 0;i < count;i++)
	{
		printf("#");
	}
	return 0;
}