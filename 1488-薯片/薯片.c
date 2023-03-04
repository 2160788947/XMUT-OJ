#include<stdio.h>
int main()
{
	int n;
	double m, money = 100;
	scanf("%lf", &m);
	for (n = 0;money >=m;n++)
	{
		money -= m;
		m *= 0.9;
		if (m < 5)//薯片限制每包的最低价为5元
			m = 5;
	}
	printf("%d", n);
	return 0;
}