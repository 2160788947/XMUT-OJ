#include<stdio.h>
#include<string.h>
int isleft(char str[], int i, int t)
{
	for (; i <= t; i++, t--)
	{
		if (str[i] > str[t])
		{
			return 1;//如果左边深度搜索存在一个数字大于右边搜索的数字,则返回1
		}
		else if (str[i] < str[t])
		{
			return 0;//与上面相反
		}
	}
	return 0;
}
int main()
{
	int l = 0, k,i=0,j;
	char s[105] = { 0 }, d[105] = { 0 }, num[105] = { 0 }, c;
	gets(s);
	//读入字符串
	for (k = 0; s[k]; k++)
	{
		if (s[k] >= '0' && s[k] <= '9')
		{
			num[l++] = s[k];
		}
	}
	//将字符串中的数字存入另外一个数组中
	l = 0;
	if (num[0])//如果字符串中有数字,进行下一步
	{
		j = strlen(num) - 1;
		while (i<=j)
		{
			if (num[i] > num[j])//如果左边的数字大于右边的数字,则取左边数字
			{
				d[l++] = num[i];
				i++;
			}
			else if (num[i] < num[j])//与上面相反
			{
				d[l++] = num[j];
				j--;
			}
			else//如果左右两边数字相等,进行深度搜索,分别往下读数字,直到判断两边数字不相等为止
			{
				if (isleft(num, i, j))
				{
					d[l++] = num[i];
					i++;
				}
				else
				{
					d[l++] = num[j];
					j--;
				}
			}
		}
		printf("%s", d);
	}
	else
	{
		printf("0");
	}
	return 0;
}