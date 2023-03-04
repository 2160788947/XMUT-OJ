#include<stdio.h>
int main()
{
	int n,num_1,num_2;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d", &num_1, &num_2);
		if ((num_1 * num_2) > 0)
			printf("+\n");
		else
			printf("-\n");
	}
	return 0;
}