#include<stdio.h>
int main()
{
	int n,i;
	int a, b, c, room[1200] = {0},max=0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d %d", &a, &b, &c);
		for (i = b; i < b + c; i++)
		{
			room[i] += a;
		}
	}
	for (i = 0; i < 1200; i++)
	{
		if (max < room[i])
		{
			max = room[i];
		}
	}
	printf("%d", max);
	return 0;
}