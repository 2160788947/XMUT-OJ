#include <iostream>
#include <algorithm>
#define INF 0x3f3f3f3f
using namespace std;

int main() {

    int des, n, T[15], Coin[15];
    int dp[20001];
    memset(dp, INF, sizeof(dp));
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> T[i] >> Coin[i];
    }

    cin >> des;
    dp[0] = 0;

    for (int i = 0; i < n; i++)
        for (int j = 1; j <= Coin[i]; j++)
            for (int k = des; k >= T[i]; k--)
                dp[k] = min(dp[k], dp[k - T[i]] + 1);

    if (dp[des] < INF)
        cout << dp[des] << endl;
    else
        cout << -1 << endl;
}