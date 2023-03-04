#include<stdio.h>

int main()
{
	char x;
	scanf("%c", &x);
	if (x >= 'a' && x <= 'z')
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}