#include<stdio.h>
int main()
{
	int i,cnt=0;
	double n, x;
	scanf("%lf %lf", &n, &x);
	for (i=1;;x*=0.95,n+=2,i++)//�»�2m,�н�����Ϊԭ����95%
	{
		n-=x;
		if (x < 1e-5)//��x����������Сʱ,˵���޷����ﾮ��
		{
			cnt = 1;
			break;
		}
		else if (n <= 0)//0m��Ϊ����,�����ǰλ��<0,�Ѿ����ﾮ��
		{
			break;
		}
	}
	if (cnt == 1)
	{
		printf("-1");
	}
	else
	{
		printf("%d", i);
	}
	return 0;
}