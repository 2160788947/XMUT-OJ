#include<stdio.h>
#include<math.h>

int main()
{
	double sum, item,x;
	int i = 0, count = 0;
	scanf("%lf", &x);
	sum = x;
	item = x;
	while (fabs(item) >= 1e-5)
	{
		i++;
		item = -item * x * x / ((2 * i) * (2 * i + 1));//��һ�Ϊ-x^3/3! item=-x*x*x/(2*3) 
		//�ڶ���Ϊx^5/5! ֱ�ӶԵ�һ�ȡ����-item*x*x/(4*5),�����Դ����� 
		sum += item;
		count++;
	}
	printf("%.3lf", sum);
	return 0;
}
