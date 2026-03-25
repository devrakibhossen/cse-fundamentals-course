#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // vector<int> v2 = {100,200,300};
    // v.insert(v.begin()+2 , v2.begin(),v2.end() );
    // v.pop_back();
    // v.pop_back();
    // vector<int> v2;
    // v2 = v;

    // for(int i = 0 ; i < v2.size(); i++){
    //   cout << v2[i] << " ";
    // }

    // for(int x : v2){
    //   cout << x << " ";
    // }

    // v.erase(v.begin()+2);
    v.erase(v.begin() + 1, v.begin() + 3);

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}