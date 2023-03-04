//#include<stdio.h>
//int main()
//{
//	int n, k, o, t, sum, num[10] = {0},i=0;
//	scanf("%d", &n);
//	while (n--)
//	{
//		sum = 0;
//		scanf("%d", &k);
//		t = k-1;
//		while (k--)
//		{
//			scanf("%d", &o);
//			sum += o;
//		}
//		sum -= t;
//		num[i++] = sum;
//	}
//	for (n = 0;n < i;n++)
//		printf("%d\n", num[n]);
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n, k, o, t, sum;
	scanf("%d", &n);
	while (n--)
	{
		sum = 0;
		scanf("%d", &k);
		t = k - 1;
		while (k--)
		{
			scanf("%d", &o);
			sum += o;
		}
		sum -= t;
		printf("%d\n", sum);
	}
	return 0;
}