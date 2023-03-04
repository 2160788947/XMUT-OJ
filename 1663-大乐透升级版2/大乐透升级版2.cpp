#include<stdio.h>
int main()
{
	int i, t, j, cnt1 = 0,cnt2=0;
	int q[20] = { 0 }, h[20] = { 0 };
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &q[i]);
	}
	for (i = 0; i < 2; i++)
	{
		scanf("%d", &h[i]);
	}
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &t);
		for (j = 0; j < 5; j++)
		{
			if (t == q[j])
			{
				cnt1++;
				break;
			}
		}
	}
	for (i = 0; i < 2; i++)
	{
		scanf("%d", &t);
		for (j = 0; j < 2; j++)
		{
			if (t == h[j])
			{
				cnt2++;
				break;
			}
		}
	}
	if (cnt1 == 2&&cnt2==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}