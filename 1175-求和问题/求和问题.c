#include<stdio.h>
int main()
{
	int a, b,t=0,sum=0;
	scanf("%d %d", &a, &b);
	if (b < a)
	{
		t = b;
		b = a;
		a = t;
	}
	if (a == b)
	{
		sum = a;
	}
	else
	{
		for (;a <= b;a++)
		{
			sum += a;
		}
	}
	printf("%d", sum);
	return 0;
}