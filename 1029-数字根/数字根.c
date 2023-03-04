#include<stdio.h>
int main()
{
	int x,sum=0,i;
	do
	{
		scanf("%d", &x);
		i = x;
		sum = 0;
		if (x == 0)
			break;
		while (i!=0&&sum<10)
		{
			sum += (i % 10);
			i /= 10;
			if (sum >= 10)
			{
				sum = sum % 10;
				sum++;
			}
		}
		printf("%d\n", sum);
	} while (x);
	return 0;
}