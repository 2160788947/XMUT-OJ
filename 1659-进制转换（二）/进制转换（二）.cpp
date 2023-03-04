#include<stdio.h>
#include<string.h>
int main()
{
	int N, j,i,sum=0,t=0,h,l;
	char M[50] = { 0 };
	scanf("%s %d", &M, &N);
	t=h= strlen(M);
	//¼ÆËãÎ»Êı
	for(j=0;j<t;j++)
	{
		i = M[j]-'0';
		for(l=1;l<h;l++)
		{
			i *= N;
		}
		sum += i;
		h--;
	}
	printf("%d", sum);
	return 0;
}