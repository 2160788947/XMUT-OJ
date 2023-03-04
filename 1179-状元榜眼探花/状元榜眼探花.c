#include<stdio.h>
int factorial(int x,int y);
int main()
{
	int n, s,num,k,i;
	scanf("%d %d", &n, &s);
	k = n - s;
	i = n - 1;
	num = factorial(i, i-2)*k;
	printf("%d", num);
	return 0;
}
int factorial(int x,int y)
{
	int t=1;
	for (;x > y;x--)
		t *= x;
	return t;
}
//·½·¨¶þ
#include <stdio.h>
int main()
{
	int S, N, y;
	scanf("%d %d", &N, &S);
	y = (N - 1) * (N - 2) * (N - S);
	printf("%d", y);
	return 0;
}