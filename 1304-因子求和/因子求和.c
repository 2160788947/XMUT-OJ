#include<stdio.h>
int main()
{
	int x = 0, y = 0, z = 1, n, i, t,sum=0,k;
	scanf("%d", &n);
	if (n < 3) {
		sum = 0;
	}
	else if(n>=3)
	{
		for (i = 3;i <= n; i++)
		{
			sum += z;
			t = z + x + y;
			k = y;
			y = z;
			z = t;
			x = k;
		}
	}
	printf("%d", sum);
	return 0;
}