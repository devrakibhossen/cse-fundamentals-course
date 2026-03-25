#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 3, 8, 2, 9};

    // replace(v.begin(), v.end(), 2, 100);

    // for(int x :v){
    //   cout << x <<endl;
    // }

    auto it = find(v.begin(), v.end(), 5);
    cout << *it << endl;
    // if(it == v.begin()){
    //   cout << "Found" << endl;
    // }
    // else{
    //   cout << "Not Found" << endl;
    // }

    return 0;
}