#include<stdio.h>
int apple(int m,int n);
int main()
{
	int m, n,t,x;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &m, &n);
		x = apple(m, n);
		printf("%d\n", x);
	}
	return 0;
}
int apple(int m,int n)
{
	if (n == 1 || m == 0||m==1)
		return 1;
	else if (m < n)
		return apple(m, m);
	else
		return apple(m, n - 1) + apple(m - n, n);
}

