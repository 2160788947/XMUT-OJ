#include<stdio.h>

int main()
{
	int year,sum=0, day,month,n, month_leap[12] = {31,29,31,30,31,30,31,31,30,31,30,31},month_unleap[12]= { 31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%4d-%2d-%2d", &year,&month,&day);
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			sum += 366*(year-1990);
			for (n = 0;n < month-1;n++)
			{
				sum += month_leap[n];
			}
			sum += day;
		}
		else
		{
			sum += 365 * (year - 1990);
			for (n = 0;n < month-1;n++)
			{
				sum += month_unleap[n];
			}
			sum += day;
		}
		if (sum % 5 <= 3 && sum % 5 >= 1)
			printf("He is working");
		else
			printf("He is having a rest");
	return 0;
}