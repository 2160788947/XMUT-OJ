#include<stdio.h>
int main()
{
	int n, k,i,cnt=0,l;
	int health[7] = { 0 };
	scanf("%d %d", &n, &k);
	for (l = 0; l < n; l++)
	{
		scanf("%d", &health[l]);
		//����Ѫ��
	}
	while (k--)//����ն����
	{
		cnt =0;
		for (i = 0; i < 7; i++)
		{
			health[i]--;
			//ȫ��ū����Ѫ��-1
			if (health[i] > 0)
			{
				cnt++;//��¼Ѫ������0��ū����,��������ū����������
			}
		}
		for(i=0;i<7&&cnt;i++)
		{
			if (health[i] < 0)//��healthС��0ʱ,��ū�����Ա��µ�ū�����滻
			{
				health[i] = 3;
				cnt--;
			}
		}
	}
	cnt = 0;
	for (i = 0; i < 7; i++)
	{
		if (health[i] > 0)
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}