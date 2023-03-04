#include<stdio.h>
int main()
{
	int n, m, num[200] = {0},i,t[200];
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++)
	{
		scanf("%d", &t[i]);
		num[t[i]]++;
	}
	for (i = 0;i < n;i++)
	{
		if (num[t[i]] == 1)
		{
			printf("ZGS\n");
		}
		else if (num[t[i]] > 1)
		{
			printf("%d\n", num[t[i]] - 1);
		}
	}
	return 0;
}