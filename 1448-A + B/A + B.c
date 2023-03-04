#include<stdio.h>
int main()
{
	unsigned int a, b,a_1,b_1,cnt=0,sum=0;
	scanf("%d %d", &a, &b);
	for (;a != 0 || b != 0;)
	{
		a_1 = a % 10;
		b_1 = b % 10;
		sum += a_1 + b_1;
		if (sum >= 10)
		{
			sum = 1;//½øÒ»
			cnt++;
		}
		else
		{
			sum = 0;
		}
		a /= 10;
		b /= 10;
	}
	printf("%d", cnt);
	return 0;
}