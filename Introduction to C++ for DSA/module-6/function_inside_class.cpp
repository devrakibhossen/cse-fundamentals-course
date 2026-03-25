#include <bits/stdc++.h>
using namespace std;

class Student {
  public:
  string name;
  int roll;
  int math;
  int english;
  
  Student(string name, int roll, int math,int english){
    this -> name = name;
    this -> roll = roll;
    this -> math = math;
    this -> english = english;
  }
  
  void total_mark()
  {
    cout << "Total mark " << name << " = " << math+english  <<endl;
  }
  
};

int main() 
{
   Student sakib("Sakib Hossen",23,50,70);
   //cout << sakib.name << endl;
   sakib.total_mark();
   Student rakib("Rakib Hossen",25,70,78);
    rakib.total_mark(); 
  
    return 0;
}