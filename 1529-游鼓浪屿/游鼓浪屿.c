#include<stdio.h>
int main()
{
	int n,m,sum=0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &m);
		if (m <= 6)
			sum += 0;
		else if (m > 6 && m <= 18)
			sum += 64;
		else if (m >= 50)
			sum += 48;
		else
			sum += 80;
	}
	printf("%d", sum);
	return 0;
}