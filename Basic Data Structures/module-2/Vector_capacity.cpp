#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.resize(5, 100);
    cout << v.size() << endl;
    // v.clear();
    // cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    /* vector<int> v;
    v.push_back(10);

    cout << v.max_size() << endl;

    if (v.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }  */

    return 0;
}