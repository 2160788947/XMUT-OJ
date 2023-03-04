//#include<stdio.h>
//int main()
//{
//	int i, t, r, x[120] = {0}, cnt=0, j = 1,l;
//	scanf("%d %d", &t, &r);
//	for (i = 0;i < t;i++)
//	{
//		scanf("%d", &x[i]);
//	}
//	for (i = 0;i < t;i++)
//	{
//		for (j = i;x[i] + r >= x[j];j++)
//		{
//			l = j;
//		}
//		for (;x[l] + r >= x[j];j++);
//		i = j-1;
//		cnt++;
//	}
//	if (t == 1)
//	{
//		cnt = 1;
//	}
//	printf("%d", cnt);
//	return 0;
//}
#include <stdio.h>
#include<math.h>

void main()
{
    int i, j;
    for (i = 0; i <= 4; i++)
    {
        for (j = -4; j <= 4; j++)
        {
            if (fabs(i) >= fabs(j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
