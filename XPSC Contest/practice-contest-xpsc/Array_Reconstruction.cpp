#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        vector<long long int> a(n - 2);
        for (int i = 0; i < n - 2; i++)
        {
            cin >> a[i];
        }
        long long int oldsum;
        cin >> oldsum;

        long long int newsum = 0;

        for (int i = 0; i < n - 2; i++)
        {
            newsum = newsum + a[i];
        }

        long long int lagbe = oldsum - newsum;
        cout << lagbe + 1 << endl;
    }
    return 0;
}