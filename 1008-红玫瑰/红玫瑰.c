#include<stdio.h>
int main()
{
	int i,k=1,sum=0,cnt=0,x,t=0;
	for (x = 1;x <= 700;x++)
	{
		sum = 0;
		for (i = 1;i <= x;i++)
		{
			if (x % i == 0)
				sum += i;
		}
		if (sum%x==0)
		{
			cnt++;
			t=x;
		}
	}
	printf("%d\n", t);
	printf("%d\n", cnt);
	for (x = 1;x <= 700;x++)
	{
		sum = 0;
		for (i = 1;i <= x;i++)
		{
			if (x % i == 0)
				sum += i;
		}
		if (sum % x == 0)
		{
			printf("%d ", x);
		}
	}
	return 0;
}