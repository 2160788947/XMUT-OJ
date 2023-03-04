#include<stdio.h>
int main()
{
	int n,k,j=0,o=0;
	scanf("%d", &n);
	if (n == 0)
		o++;
	while (n != 0)
	{
		k = n % 10;
		n /= 10;
		if (k % 2 == 0)
		{
			o++;
		}
		else if (k % 2 == 1|| k % 2 == -1)
		{
			j++;
		}
	}
	printf("%d,%d", j, o);
	return 0;
}