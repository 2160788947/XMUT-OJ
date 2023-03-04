#include<stdio.h>

int main()
{
	int profit;
	double salary=500,i;
	scanf("%d", &profit);
	if (profit > 5000) {
		i = profit * 0.2;
	}
	if (profit > 1000 && profit <= 5000) {
		i = profit * 0.15;
	}
	printf("%.2f", i + salary);
	return 0;
}