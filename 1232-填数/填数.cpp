#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int a[13],sum=0;
	for (int i = 0;i < 13;i++)
		a[i] = i;
    do {
        if (a[1] > a[2] || a[2] > a[3] || a[3] > a[4])continue;
        if (a[5] > a[6] || a[6] > a[7] || a[7] > a[8])continue;
        if (a[9] > a[10] || a[10] > a[11] || a[11] > a[12])continue;

        if (a[1] > a[5] || a[5] > a[9])continue;
        if (a[2] > a[6] || a[6] > a[10])continue;
        if (a[3] > a[7] || a[7] > a[11])continue;
        if (a[4] > a[8] || a[8] > a[12])continue;
        sum++;
    } while (next_permutation(a + 2, a + 12));//È«ÅÅÁĞº¯Êı
    printf("%d", sum);
	return 0;
}