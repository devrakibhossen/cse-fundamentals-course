#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s;
        cin >> x;

        for (int i = 0; i <= s.size(); i++)
        {
            string temp_s;

            for (int j = i; j < i + x.size() && i + x.size() <= s.size(); j++)
            {
                temp_s.push_back(s[j]);
            }
            if (temp_s == x)
            {
                s.replace(i, x.size(), "#");
            }
        }

        cout << s << endl;
    }

    return 0;
}