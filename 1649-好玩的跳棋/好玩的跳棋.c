#include<stdio.h>
int main()
{
	int i, n, step, reach = 0, count = 0, t = 0, cnt = 0;
	scanf("%d", &n);
	for (i = 0; i < n-1; i++)
	{
		scanf("%d", &step);
		if (reach == step + i && step == 0)
		{
			cnt = 1;
		}
		if (step + i > reach)
		{
			reach = step + i;
		}
		if (t == i)
		{
			count++;
			t = reach;
		}
		//if (t >= n)
		//	break;//可提高效率
	}
	if (cnt == 0)
		printf("%d", count);
	else
		printf("-1");
	return 0;
}