#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int t[25000] = { 0 };
int main()
{
	int n, i, cnt = 0, l;
	int* p = NULL;
	map<int, int>num;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &t[i]);
		//输入难度
		num[t[i]]++;
		//计算次数
	}
	while (1)
	{
		p = max_element(t, t + n);
		//找到最大的难度
		l = *p;
		cnt = 0;
		//方法一:
		while (l)
		{
			if (num[l] == 0 && l > 0)
				//判断难度中是否有最大难度的二分之一,并且判断减半后是否为正整数
			{
				num[l] = 1;//减半后难度数量为1
				*p = l;
				cnt = 1;
				break;
			}
			//以上不满足,则l/2
			l /= 2;
		}
		if (cnt == 0)
			break;
		//方法二:
		/*
		while (num[l] == 1 && l != 0)
		{
			l /= 2;//减半
		}
		if (l == 0) 
		{
			break;
		}
		num[l] = 1;//减半后难度数量为1
		*p = l;
		*/
	}
	printf("%d", *max_element(t, t + n));
	//输出最大的难度
	return 0;
}
