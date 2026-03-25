#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    int a[] = {10, 20, 30};
    vector<int> v = {20, 30, 40};
    list<int> l2(v.begin(), v.end());
    // cout << l.size() << endl;
    // cout << *l.begin() << endl;

    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val : l2)
    {
        cout << val << endl;
    }

    return 0;
}