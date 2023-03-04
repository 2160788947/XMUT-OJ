#include<stdio.h>
int main()
{
	double g, h, bmi;
	scanf("%lf %lf", &g, &h);
	bmi = g / (h * h);
	if (bmi < 18.5)
		printf("thin");
	else if(bmi>=18.5&&bmi<24)
		printf("health");
	else if (bmi >= 24 && bmi < 28)
		printf("heavy");
	else
		printf("fat");
	return 0;
}