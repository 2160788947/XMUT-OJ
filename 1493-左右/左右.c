#include<stdio.h>
int main()
{
	int s, m, cnt = 0;//s����˾���ҵľ��룬m����С��ÿ��һ���ľ��롣
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
	//����Ϊż������Ϊ������
	//��Ϊ����Ϊ���εĳ���,��Ҫ�����ж�,s-s - m * (s / m)�Ƿ����0
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
