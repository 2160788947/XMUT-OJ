#include<stdio.h>
#include<math.h>
int main()
{
	int n, x, y,i,cnt=0;
	scanf("%d", &n);
	for (x = n-1;x>0;x--)//从n往下找
	{
		for (i = 2;i < x;i++)
		{
			if (x % i == 0)//判断是否为素数
			{
				cnt = 0;
				break;
			}
			else
			{
				cnt = 1;
			}
		}
		if (cnt == 1)
			break;
	}
	for (y = n + 1;y<10*n;y++)//从n往上找
	{
		for (i = 2;i < y;i++)//判断是否为素数
		{
			if (y % i == 0)
			{
				cnt = 0;
				break;
			}
			else
			{
				cnt = 1;
			}
		}
		if (cnt == 1)
			break;
	}
	if (n == 3||x<=1)
		printf("2");
	else if (n == 2)
		printf("3");
	else if (abs(n - x) > abs(n - y))
		printf("%d", y);
	else if (abs(n - x) == abs(n - y))
		printf("%d %d", x, y);
	else
		printf("%d", x);
	return 0;
}