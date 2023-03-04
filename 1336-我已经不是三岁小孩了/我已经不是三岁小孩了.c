#include<stdio.h>
int main()
{
	int i,a,b;
	char c[100];
	gets(c);
	for (i = 0;c[i] != '\0';i++)
	{
		if (c[i] >= '1' && c[i] <= '9')
		{
			a = c[i] - '0';
			i += 2;
			b = c[i] - '0';
			break;
		}
	}
	if (4 <= b && 4 >= a)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}