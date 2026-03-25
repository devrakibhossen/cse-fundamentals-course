#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> lst;
    string address;
    while (cin >> address)
    {
        if (address == "end")
        {
            break;
        }
        lst.push_back(address);
    }
    list<string>::iterator current_address = lst.begin();
    int query;
    cin >> query;
    while (query--)
    {

        string command;
        cin >> command;

        if (command == "visit")
        {
            string visit_address_name;
            cin >> visit_address_name;
            list<string>::iterator it = find(lst.begin(), lst.end(), visit_address_name);
            if (it == lst.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current_address = it;
                cout << *current_address << endl;
            }
        }
        else if (command == "next")
        {
            if (next(current_address) == lst.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current_address = next(current_address);
                cout << *current_address << endl;
            }
        }
        else if (command == "prev")
        {
            if (current_address == lst.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                current_address = prev(current_address);
                cout << *current_address << endl;
            }
        }
    }
    return 0;
}