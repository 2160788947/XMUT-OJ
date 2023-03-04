#include<stdio.h>
int main()
{
	int m, n,i,sum=0;
	scanf("%d %d", &m, &n);
	sum = m;
	for (i = 1;i < n;i++)
	{
		m /= 2;
		sum += m;
	}
	printf("%d %d", m, sum);
	return 0;
}