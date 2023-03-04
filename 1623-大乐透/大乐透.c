#include<stdio.h>
int main()
{
	int num, a[5] = { 0 }, b[2] = { 0 }, cnt = 0, i;
	scanf("%d", &num);
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 2; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (num == a[i])
		{
			cnt = 1;
		}
	}
	if (cnt == 1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}