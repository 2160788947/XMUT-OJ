#include<stdio.h>
int main()
{
	int n;
	double price=0,sum=0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%lf", &price);
		sum += price;
	}
	if (sum >= 500)
		sum *= 0.8;
	else if(sum<500&&sum>=300)
		sum *= 0.9;
	printf("%.2lf", sum);
	return 0;
}