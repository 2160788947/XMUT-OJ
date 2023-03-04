#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d", &x);
	y = x * x;
	y = y % 10;
	if (y == x)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}