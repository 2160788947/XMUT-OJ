#include<stdio.h>
int main()
{
	int n,i,a[20],sum=0,time=0,candy=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		//�����ۻ�ʱ��
		sum += a[i];
		//�ж��ۻ�ʱ���Ƿ񳬹�30min
		if (sum>30)
		{
			//�õ�����30min��ʱ��
			sum -= 30;
			//��oj������Ӳ�����ҵʱ��
			a[i] += 5;
		}
		//�ۻ�ʱ��ǡ��Ϊ30minʱ,�����Ϊ���һ����ҵ,��ojʱ�䲢����ҵʱ��														
		else if (sum == 30 && i != n - 1)
		{
			//ͬ��
			sum = 0;
			a[i] += 5;
		}
	}
	//��������
	for (i = 0; i < n; i++)
	{
		//�жϵ�ǰ���ŵ����Ƿ��ܹ���ɸ÷���ҵ
		if (time - a[i] < 0)
		{
			//�������,�����³�һ����
			candy++;
			//��ʱ���ʼ��Ϊ10min
			time = 10;
		}
		//��ȥд��ҵ���ĵ�ʱ��
		time -= a[i];
	}
	printf("%d", candy);
	return 0;
}