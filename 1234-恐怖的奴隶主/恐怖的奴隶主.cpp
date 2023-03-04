#include<stdio.h>
int main()
{
	int n, k,i,cnt=0,l;
	int health[7] = { 0 };
	scanf("%d %d", &n, &k);
	for (l = 0; l < n; l++)
	{
		scanf("%d", &health[l]);
		//输入血量
	}
	while (k--)//旋风斩次数
	{
		cnt =0;
		for (i = 0; i < 7; i++)
		{
			health[i]--;
			//全部奴隶制血量-1
			if (health[i] > 0)
			{
				cnt++;//记录血量大于0的奴隶主,即所增加奴隶主的数量
			}
		}
		for(i=0;i<7&&cnt;i++)
		{
			if (health[i] < 0)//当health小于0时,该奴隶可以被新的奴隶主替换
			{
				health[i] = 3;
				cnt--;
			}
		}
	}
	cnt = 0;
	for (i = 0; i < 7; i++)
	{
		if (health[i] > 0)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}