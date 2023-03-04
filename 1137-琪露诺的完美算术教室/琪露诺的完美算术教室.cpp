#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a[1000] = { 1 };
        int N, len=1,i,t;
        cin >> N;
        for(t=2;t<=N;t++)
        {
            int p=0;
            for (i = 0; i < len; i++)
            {
                a[i] = a[i]*t+p;
                p = a[i] / 10;
                a[i] %= 10;
            }
            while (p)    
            {
                a[len++]+=p%10;
                p /= 10;
            }
        }
        for (i = len - 1; i >= 0; i--)
        {
            cout << a[i];
        }
        cout << endl;
    }
    
    return 0;
}