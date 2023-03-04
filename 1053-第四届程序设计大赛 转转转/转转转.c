#include<stdio.h>
#include<math.h>
#define PI 3.14159265
int main()
{
	double x, y, z, r,v;
	scanf("%lf%lf%lf", &x, &y, &z);
	r = sqrt(x * x + y * y + z * z);
	v = (4 / 3.0) * PI * r * r * r;
	printf("%.2lf", v);
	return 0;
}