#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double n,sum=0,k;
	scanf("%lf", &n);
	for (i = 0,k=n;sum != n;i++)
	{
		k =ceil(k/2);
		sum += k;
	}
	printf("%d", i);
	return 0;
}