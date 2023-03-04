#include<stdio.h>
int main()
{
	int s, m, cnt = 0;//s代表公司到家的距离，m代表小华每走一步的距离。
	scanf("%d %d", &s, &m);
	if ((s / m) % 2 == 1)
	{
		if (s - m * (s / m) > 0)
			cnt = 0;
		else
			cnt = 1;
	}
	else if ((s / m) % 2 == 0)
	{
		if (s - m * (s / m) > 0)
			cnt = 1;
		else
			cnt = 0;
	}
	//计算为偶数步或为奇数步
	//因为数据为整形的除法,需要额外判断,s-s - m * (s / m)是否大于0
	if (cnt == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
