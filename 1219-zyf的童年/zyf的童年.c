#include<stdio.h>
int main() {
    int T,n,x,a;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &n);
        scanf("%d", &a);
        while (--n)
        {
            scanf("%d", &x);
            a ^= x;
        }
        printf("%d\n", a);
    }
    return 0;
}
