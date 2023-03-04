#include<stdio.h>
int main()
{
	int m, k,i=0,day=0;
	scanf("%d%d", &m, &k);
	while(m>0)
	{
		m--, i++, day++;
		if(i!=0)
		if (i % k == 0)
		{
			m++;
		}
	}
	printf("%d", day);
	return 0;
}