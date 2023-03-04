#include<stdio.h>
int main()
{
	int n, x, cnt[200] = {0},i;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &x);
		cnt[x - 1]++;
		
	}
	for (i = 0;i < 200;i++)
	{
		if (cnt[i] == 1)
		{
			printf("%d", i+1);
			break;
		}
	}
	return 0;
}