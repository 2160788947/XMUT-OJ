#include<stdio.h>
int main()
{
	int y;
	scanf("%d", &y);
	//2022为虎年,y-2020为12的倍数说明为虎年
	if ((y - 2022) % 12 == 0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
