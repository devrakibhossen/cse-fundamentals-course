#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    stack<int> st;
    queue<int> q;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    if (st.size() != q.size())
    {
        cout << "NO" << endl;
    }
    else
    {

        int flag = 0;
        while (!st.empty() && !q.empty())
        {
            if (st.top() == q.front())
            {
                flag = 1;
                break;
            }

            st.pop();
            q.pop();
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}