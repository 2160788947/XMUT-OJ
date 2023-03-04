#include<stdio.h>
int main()
{
	int n,T;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		if (n == 2 || n == 3)
		{
			printf("Win\n");
		}
		else
			printf("Lose\n");
	}
	return 0;
}