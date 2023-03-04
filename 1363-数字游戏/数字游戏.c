#include<stdio.h>
int main()
{
	int a,i,k,l,h=0;
	scanf("%d", &a);
	for (i = a;i < a + 4;i++)
	{
		for (k = a;k < a + 4;k++)
		{
			for (l = a;l < a + 4;l++)
			{
				if (i != k && i != l && k != l)
				{	
					printf("%d", i * 100 + 10 * k + l);
					h++;
					if (h%6==0)
				{
					printf("\n");
				}
				else
				{
					printf(" ");
				}
				}
				
			}
		}
	}
	return 0;
}
