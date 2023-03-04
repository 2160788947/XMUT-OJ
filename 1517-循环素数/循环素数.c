#include<stdio.h>
int figure(int n)
{
	int t = 0;
	while (n != 0)
	{
		n /= 10;
		t++;
	}
	return t;
}
int mul(int t)
{
	int i=1;
	while (--t)
	{
		i *= 10;
	}
	return i;
}
int main()
{
	int n, t, a, i,cnt=0,j;
	scanf("%d", &n);
	t = figure(n);
	//计算位数
	for(j=0;j<t;j++)
	{
		for (i = 2; i * i <= n; i++)
		{
			if (n % i == 0)//如果为素数,跳出全部循环,输出No
			{
				cnt = 1;
				goto out;
			}
		}

		a = n % 10;
		n = n / 10 + a * mul(t);
		//进行移位
	}
out:;
	if (cnt == 0||n==2)//特例:2为素数
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}