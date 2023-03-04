#include<stdio.h>
int main()
{
	int i,cnt=0;
	double n, x;
	scanf("%lf %lf", &n, &x);
	for (i=1;;x*=0.95,n+=2,i++)//下滑2m,行进距离为原来的95%
	{
		n-=x;
		if (x < 1e-5)//当x趋近于无限小时,说明无法到达井口
		{
			cnt = 1;
			break;
		}
		else if (n <= 0)//0m处为井口,如果当前位置<0,已经到达井口
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