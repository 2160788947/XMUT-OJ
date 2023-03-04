#include<stdio.h>
int main()
{
	int prime[2000] = { 2 }, i, n, cnt,k=1;
	for (i = 3;i<=10000;i += 2)
	{
		cnt = 1;
		for (n = 2;n * n <= i;n++)
		{
			if (i % n == 0)
			{
				cnt = 0;
				break;
			}
		}
		if (cnt)
		{
			prime[k] = i;
			k++;
		}
	}//将10000以内的质数全部储存
	while (scanf("%d", &n) && n != 0)
	{
		for (i = 2000;i >= 0;i--)
		{
			if (prime[i] < n)
			{
				for (k = 0;k < i;k++)
				{
					if (prime[i] + prime[k] == n)
					{
						printf("%d=%d+%d\n", n, prime[k], prime[i]);
						goto loop;
					}
				}
			}
		}
	loop:;
	}
	return 0;
}