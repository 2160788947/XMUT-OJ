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
		//�����Ѷ�
		num[t[i]]++;
		//�������
	}
	while (1)
	{
		p = max_element(t, t + n);
		//�ҵ������Ѷ�
		l = *p;
		cnt = 0;
		//����һ:
		while (l)
		{
			if (num[l] == 0 && l > 0)
				//�ж��Ѷ����Ƿ�������ѶȵĶ���֮һ,�����жϼ�����Ƿ�Ϊ������
			{
				num[l] = 1;//������Ѷ�����Ϊ1
				*p = l;
				cnt = 1;
				break;
			}
			//���ϲ�����,��l/2
			l /= 2;
		}
		if (cnt == 0)
			break;
		//������:
		/*
		while (num[l] == 1 && l != 0)
		{
			l /= 2;//����
		}
		if (l == 0) 
		{
			break;
		}
		num[l] = 1;//������Ѷ�����Ϊ1
		*p = l;
		*/
	}
	printf("%d", *max_element(t, t + n));
	//��������Ѷ�
	return 0;
}
