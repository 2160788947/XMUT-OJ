#include<stdio.h>
int main()
{
	int n, num[100][2] = {0}, i,t;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d %d", &num[i][0], &num[i][1]);
	}
	t = n;
	for (i = 0;i < n-1;i++)
	{
		if (num[i][0] <= num[i + 1][0] && num[i][1] > num[i + 1][0] && num[i][1] <= num[i + 1][1])
		{
			t--;
			num[i + 1][1] = num[i][1];
		}		
		else if (num[i][0] <= num[i + 1][0] && num[i][1] > num[i + 1][1])
		{
			t--;
		}
	}
	printf("%d", t);
	return 0;
}