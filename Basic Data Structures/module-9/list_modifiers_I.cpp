#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    list<int> l2 = {100, 200};
    vector<int> v = {2, 3, 4};
    // list<int> l2 ;
    // l2 = l;
    // l2.assign(l.begin(),l.end());
    // l2.push_back(40);
    // l2.push_front(100);
    // l2.pop_back();
    // l2.pop_front();
    l.insert(next(l.begin(), 2), v.begin(), v.end());
    // cout << *next(l.begin(),2) << endl;
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}