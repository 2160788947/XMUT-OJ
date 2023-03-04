#include<stdio.h>
#include<string.h>
int main()
{
	char x[4];
	int n,degree;
	scanf("%d", &n);
	while (n--)
	{
		scanf("%s %d", x, &degree);
		if (((degree / 90) % 2) == 1&& strcmp(x, "cos") == 0)
		{
			printf("sin\n");
		}
		else if (((degree / 90) % 2) == 1 && strcmp(x, "sin") == 0)
		{
			printf("cos\n");
		}
		else if (((degree / 90) % 2) == 0 && strcmp(x, "sin") == 0)
		{
			printf("sin\n");
		}
		else if (((degree / 90) % 2) == 0 && strcmp(x, "cos") == 0)
		{
			printf("cos\n");
		}
	}
	return 0;
}