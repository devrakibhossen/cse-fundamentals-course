#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i < sqrt(n); i++)
    // {
    //     cout << i << " ";
    // }
    
    //for (int i = 1; i <= sqrt(n); i++)
    for (int i = 1; i*i <= n; i++)
    {
      if(n%i == 0){
        cout << i << " " << n/i << endl;
      }
    }
    
    
    
    return 0;
}