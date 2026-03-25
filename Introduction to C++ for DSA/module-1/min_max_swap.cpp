#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
   int a ,b ;
   cin >> a >> b;
   
  // if(a<b){
  //   cout << a << endl;
  // }
  // else{
  //     cout << b << endl;
  // }
  
  // cout << "Min: " << min(a,b) << endl;
  // cout << "Max: " << max(a,b) << endl;
  
  // int temp = a;
  // a =b;
  // b= temp;
  // cout << a << " " << b << endl;
  
  swap(a,b);
 
  cout << a << " " << b << endl;
  
  
  
   
    return 0;
}