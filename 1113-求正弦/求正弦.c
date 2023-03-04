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
		item = -item * x * x / ((2 * i) * (2 * i + 1));//第一項为-x^3/3! item=-x*x*x/(2*3) 
		//第二项为x^5/5! 直接对第一項取负，-item*x*x/(4*5),后面以此类推 
		sum += item;
		count++;
	}
	printf("%.3lf", sum);
	return 0;
}
