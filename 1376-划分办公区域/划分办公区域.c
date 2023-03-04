#include<stdio.h>
int main()
{
    int n, k, sum, cnt, a[1005] = {0}, T, i;
    scanf("%d", &T);
    while (T--)
    {
        sum = 0;
        cnt = 0;
        scanf("%d%d", &n, &k);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        if (sum % k == 0)
        {
            sum /= k;
            i = 0;
            while (i != n)
            {
                while (a[i] > sum)
                {
                    a[i] -= sum;
                    cnt++;
                }
                while (a[i] < sum)
                {
                    a[i] += a[i + 1];
                    a[i + 1] = a[i];
                    cnt++;
                    i++;
                }
                if (a[i] == sum)
                {
                    i++;
                }
            }
            printf("%d\n", cnt);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
