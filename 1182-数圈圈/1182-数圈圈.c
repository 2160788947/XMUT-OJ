#include<stdio.h>
int main()
{
	int n,num,t,cnt;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &num);
		cnt = 0;
		while (num != 0)//取出一位数字进行判断
		{
			t = num % 10;
			num /= 10;
			if (t == 0 || t == 4 || t == 6 || t == 9)
				cnt++;
			else if(t == 8)
			{
				cnt += 2;
			}
		}
		printf("%d\n", cnt);
	}
	
	return 0;
}