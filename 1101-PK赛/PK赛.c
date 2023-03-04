#include<stdio.h>
int main()
{
	int n, i = 1;
	scanf("%d", &n);
	if (n == 2)
	{
		n = 1;
	}
	while (n != 1)
	{
		n /= 2;
		i++;
	}
	printf("%d", i);
	return 0;
}