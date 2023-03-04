#include<stdio.h>
int main()
{
	int num_1, num_2;
	double num_3, result_2;
	int result_1 = 0;
	char sign;
		scanf("%d%c%d", &num_1, &sign, &num_2);
		if (sign != '/')
		{
			switch (sign)
			{
			case '+':
				result_1 = num_1 + num_2;
				printf("%d%c%d=%d\n", num_1, sign, num_2, result_1);
				break;
			case '-':
				result_1 = num_1 - num_2;
				printf("%d%c%d=%d\n", num_1, sign, num_2, result_1);
				break;
			case 'x':
				result_1 = num_1 * num_2;
				printf("%d%c%d=%d\n", num_1, sign, num_2, result_1);
				break;
			default:
				printf("error input!");
				break;
			}
		}
		else
		{
			if (num_2 == 0)
			{

				printf("divide by 0!");
				return 0;
			}
			else
			{
				num_3 = num_2;
				result_2 = num_1 / num_3;
				printf("%d%c%d=%.2f\n", num_1, sign, num_2, result_2);
			}
		}
	return 0;
}