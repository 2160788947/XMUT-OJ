#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c,i,x1,x2;
	scanf("%lf%lf%lf", &a, &b, &c);
	i = b * b - 4 * a * c;
	x1 = (-b + sqrt(i)) / (2 * a);
	x2 = (-b - sqrt(i)) / (2 * a);
	printf("x1=%.2f x2=%.2f", x1, x2);
	return 0;
}