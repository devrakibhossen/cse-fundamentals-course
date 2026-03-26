#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> dp(n + 1);

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n == 3)
        return 2;

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    for (long long int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3] + dp[i - 4];
    }

    cout << dp[n] << endl;
    return 0;
}