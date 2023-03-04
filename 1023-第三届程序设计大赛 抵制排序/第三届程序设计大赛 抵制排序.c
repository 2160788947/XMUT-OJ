#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,i,j,t;
	int* p=NULL;
	scanf("%d", &n);
	p = (int*)calloc(n,sizeof(int));
	for (i = 0;i < n;i++)
	{
		scanf("%d", &p[i]);
	}
	for (i = 0;i < n - 1;i++)
	{
		for (j = 0;j < n - i-1;j++)
		{
			if (p[j] > p[j + 1])
			{
				t = p[j];
				p[j] = p[j + 1];
				p[j + 1] = t;
			}
		}
	}
	if (i == n - 1)
	{
		t = p[i];
		p[i] = p[i - 1];
		p[i - 1] = t;
	}
	for (i = 0; i < n;i++)
	{
		printf("%d", p[i]);
		if (i != n - 1)
		{
			printf(" ");
		}
	}

	free(p);
	return 0;
}