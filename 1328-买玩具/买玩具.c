#include<stdio.h>
int main()
{
	int n, money,cnt=0;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &money);
		while (money >= 1)
		{
			while (money >= 2)
			{
				while (money >= 5)
				{
					while (money >= 10)
					{
						while (money >= 50)
						{
							while (money >= 100)
							{
								money -= 100;
								cnt++;
							}
							if (money >= 50)
							{
								money -= 50;
								cnt++;
							}
						}
						if (money >= 10)
						{
							money -= 10;
							cnt++;
						}
					}
					if (money >= 5)
					{
						money -= 5;
						cnt++;
					}
				}
				if (money >= 2)
				{
					money -= 2;
					cnt++;
				}
			}
			if (money >= 1)
			{
				money -= 1;
				cnt++;
			}
		}
	}
	printf("%d", cnt);
	return 0;
}