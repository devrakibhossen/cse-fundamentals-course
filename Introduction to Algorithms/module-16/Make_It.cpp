#include <bits/stdc++.h>
using namespace std;
int dp[1000005];
bool rec(long long int cur, long long int tar)
{

    if (cur == tar)
    {
        return true;
    }
    if (cur > tar)
    {
        return false;
    }
    if (dp[cur] != -1)
    {
        return dp[cur];
    }
    bool res3add = rec(cur + 3, tar);
    bool res2mul = rec(cur * 2, tar);
    dp[cur] = res3add || res2mul;
    return dp[cur];
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long int n;
        cin >> n;
        memset(dp, -1, sizeof(dp));
        bool res = rec(1, n);
        if (res == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}