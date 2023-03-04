#include<stdio.h>
int main()
{
	int n,i,score;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d",&score);
		if (score <= 100 && score >= 90)
		{
			printf("excellent\n");
		}
		else if (score <= 89 && score >= 80)
		{
			printf("good\n");
		}
		else if (score <= 79 && score >= 70)
		{
			printf("soso\n");
		}
		else if (score <= 69 && score >= 60)
		{
			printf("pass\n");
		}
		else if(score <= 59 && score >= 0)
		{
			printf("fail\n");
		}
		else
		{
			printf("wrong\n");
		}
	}
	return 0;
}