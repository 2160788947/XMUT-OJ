#include<stdio.h>

int main()
{
	double profit,salary = 500, i;
	scanf("%lf", &profit);
	if (profit > 5000) {
		i = profit * 0.5;
	}
	if (profit > 1000 && profit <= 5000) {
		i = profit * 0.25;
	}
	printf("%.2f", i + salary);
	return 0;
}