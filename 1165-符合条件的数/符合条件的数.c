#include<stdio.h>
int main()
{
	int n,i,num=0;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		while ((num + 3) % 5 != 0 || (num - 3) % 6 != 0)
		{
			num++;
		}
		printf("%d\n", num);
		num++;
	}
}