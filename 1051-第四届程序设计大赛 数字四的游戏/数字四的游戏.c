#include<stdio.h>
int main()
{
	int num[1000] = {0},i,n,cnt=0,t=0;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		if (num[i] == 0)
		{
			cnt++;//����
			if (cnt % 4 == 0)
			{
				num[i] = 1;
				t++;//��¼��ȥ������
			}
		}
		if (i == (n - 1))//�ص���һ��
			i = -1;
		if (n - t == 1)//���ʣ�����һ��
		{
			break;
		}
	}
	for (i = 0;i < n;i++)
		if (num[i] == 0)
			printf("%d", i+1);
	return 0;
}