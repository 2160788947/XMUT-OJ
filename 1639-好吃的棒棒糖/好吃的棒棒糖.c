#include<stdio.h>
int main()
{
	int n, k, i, num, sum = 0, j, pre = 99999999;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n;)
	{
		sum = 0;
		for (j = 0; j < k && i < n; j++)
		{
			scanf("%d", &num);
			i++;
			if (num < pre)
			{
				sum += num;
				pre = num;
			}
			else
			{
				if (pre != 0)
				{
					sum += pre - 1;
					pre -= 1;
				}
			}
		}
		if (sum != 0)
		{
			printf("%d\n", sum);
		}
	}
	return 0;
}