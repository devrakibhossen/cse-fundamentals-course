#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 20, 40, 50, 20, 70};

    // l.insert(next(l.begin(),2),v.begin(),v.end());
    // l.erase(next(l.begin(),2),next(l.begin(),5));
    // replace(l.begin(),l.end(),20,100

    auto it = find(l.begin(), l.end(), 200);
    if (it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {

        cout << "Found" << endl;
    }

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}