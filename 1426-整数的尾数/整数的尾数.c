#include<stdio.h>
int main()
{
	int a, b, cnt = 0, sum = 0, i, t;
	scanf("%d %d", &a, &b);
	t = b;
	while (b != 0)
	{
		b /= 10;
		cnt++;
	}
	while (cnt--)
	{
		a *= 10;
	}
	for (i = 0;i < 100;i++)
	{
		sum = a + i;
		if (sum % t == 0)
			printf("%d\n", sum);
	}
	return 0;
}