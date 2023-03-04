#include<stdio.h>
int main()
{
	char sex;
	int year, month, day;
	scanf("%c %4d%2d%2d", &sex, &year, &month, &day);
	if (sex == 'M')
	{
		if (month == 8)
		{
			if (day >= 23 && day <= 31)
				printf("YES");
			else
			{
				printf("NO");
			}
		}
		else if (month == 9)
		{
			if (day >= 1 && day <= 22)
				printf("YES");
			else
			{
				printf("NO");
			}
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}
