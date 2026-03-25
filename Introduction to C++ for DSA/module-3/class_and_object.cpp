#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    // Student a;
    // a.roll = 121;
    // a.gpa = 2.5;
    // char temp[100] = "Rakib Hossen";
    // strcpy(a.name, temp);
    //cout << a.name << " " << a.roll << " " << a.gpa << " ";


    // Student a,b;

    // cin >> a.name >> a.roll >>a.gpa;
    // cin >> b.name >> b.roll >>b.gpa;
    
    // cout << a.name << " " << a.roll << " " << a.gpa << endl;
    // cout << b.name << " " << b.roll << " " << b.gpa << endl;


     Student a,b;
    cin.getline(a.name,200);
    cin  >> a.roll >>a.gpa;
    cin.ignore();
    cin.getline(b.name,200);
    cin  >> b.roll >>b.gpa;
    
    
    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;


    return 0;
}