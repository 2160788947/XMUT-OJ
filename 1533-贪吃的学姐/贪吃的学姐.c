#include<stdio.h>
int candy[100][100] = { 0 };
int main()
{
	int n, i,sum=0,max=0,t,x,y,l,j,h;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d %d",&x,&y);
		for (t = 0; candy[t][y] != 0; t++);//�����������,���ѭ������������û���ǹ���λ��
		candy[t][y] = x;
		if (y > max)//��ס�������
		{
			max = y;
		}
	}
	max += 1;
	while (max-->1)//��һ��ͽ�����
	{
		l = 0;//��������ǹ���ֵ
		for (t = 0; candy[t][max] != 0; t++)//������������ֵ����Ӧ��λ��
		{
			if (candy[t][max] > l)
			{
				l = candy[t][max];
				j = t;
			}
		}
		candy[j][max] = 0;//������ֵλ�ø�Ϊ0
		for (h = 0; candy[h][max - 1] != 0; h++);//�õ�ǰһ���ǹ��ĸ���
		sum += l;//�ܼ�ֵ
		for (i = 0; i < t; i++)//������û�б�ѡ�е��ǹ��Ƶ�ǰһ��
		{
			if (candy[i][max] != 0)
			{
				candy[h++][max - 1] = candy[i][max];
			}
		}
	}
	printf("%d", sum);
	return 0;
}