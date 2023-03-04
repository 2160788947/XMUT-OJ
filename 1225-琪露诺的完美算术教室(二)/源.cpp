#include<stdio.h>
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		long long sum=0, N;
		scanf("%I64d",&N);
		while(N=N>>1)sum += N;
		printf("%I64d\n",sum);
	}
}