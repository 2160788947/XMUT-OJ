#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,k,cnt=0,t=0;
	scanf("%d", &n);
	for (i=n;;i++)
	{
		for (k = 2;k <= sqrt(i);k++)//�ж��Ƿ�Ϊ����
		{
			if (i % k == 0)
			{
				cnt = 0;
				break;
			}
			else
			{
				cnt = 1;
			}
		}
		if (cnt == 1)//���Ϊ����
		{
			if (i - t == 2)//�ж�������֮���Ƿ�Ϊ2
			{
				printf("%d %d", t, i);
				break;
			}
			else
			{
				t = i;
			}
		}
	}
	return 0;
}