#include<stdio.h>
int main()
{
	int x,cost,price,p,c,i,sum;
	scanf("%d", &x);
	for (i = 0;i < x;i++)
	{
		scanf("%d %d %d %d", &cost, &price, &p, &c);
		if (price < p)
			sum = 0 - c - cost;
		else
			sum = (price + c - p) - c - cost;
		printf("%d\n", -sum);
	}
	return 0;
}