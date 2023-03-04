#include<iostream>
using namespace std;
int main()
{
	int n, i, cnt = 0,step=0;
	char s[1005] = { 0 }, t[26] = { 0 };
	scanf("%d", &n);
	scanf("%s", &s);
	//统计字符个数,判断是否符合回文数的字符个数
	for (i = 0; s[i]; i++)
	{
		t[s[i] - 'a']++;
	}
	if (n % 2 == 0)//若字符串长度为偶数,则字符串中的字符均为偶数个
	{
		for (i = 0; i < 26; i++)
		{
			if (t[i] % 2 != 0)
			{
				printf("-1");
				return 0;
			}
		}
	}
	else//若字符串长度为奇数,则字符串中的字符个数存在奇数
	{
		for (i = 0; i < 26; i++)
		{
			if (t[i] % 2 == 1)
			{
				cnt++;
				if (cnt != 1)
				{
					printf("-1");
					return 0;
				}
			}
		}
	}
	//对字符串进行排序
	int l, r,z=n-1;
	for (l = 0; l < z; l++,z--)//从头开始移动,z--意味着,每次移位后,末尾指针向前移动一位
	{
		for (r = z; r > l; r--)//从尾开始移动
		{
			if (s[l] == s[r])//遍历字符串,从后往前找到与s[l]相等的字符
			{
				for (; r < z; r++)//找到对应字符,进行移位;
				{
					swap(s[r], s[r + 1]);
					step++;
				}
				goto out;
			}
		}
		//若遍历字符串结束,未找到与该位置字符对应的其他字符,则该字符为个数为奇数的字符,对其保留,暂时不进行移位
		z++;//z++防止for中z--的末尾指针移位
		step += n / 2 - l;//步数仍然计入,为该位置到中间位置的距离
	out:;
	}
	printf("%d", step);
	return 0;
}
