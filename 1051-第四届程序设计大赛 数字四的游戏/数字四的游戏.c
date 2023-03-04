#include<stdio.h>
int main()
{
	int num[1000] = {0},i,n,cnt=0,t=0;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		if (num[i] == 0)
		{
			cnt++;//报数
			if (cnt % 4 == 0)
			{
				num[i] = 1;
				t++;//记录被去除的人
			}
		}
		if (i == (n - 1))//回到第一项
			i = -1;
		if (n - t == 1)//检测剩余最后一项
		{
			break;
		}
	}
	for (i = 0;i < n;i++)
		if (num[i] == 0)
			printf("%d", i+1);
	return 0;
}