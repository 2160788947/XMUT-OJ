#include<stdio.h>
int main()
{
	int n;
	double m, money = 100;
	scanf("%lf", &m);
	for (n = 0;money >=m;n++)
	{
		money -= m;
		m *= 0.9;
		if (m < 5)//��Ƭ����ÿ������ͼ�Ϊ5Ԫ
			m = 5;
	}
	printf("%d", n);
	return 0;
}