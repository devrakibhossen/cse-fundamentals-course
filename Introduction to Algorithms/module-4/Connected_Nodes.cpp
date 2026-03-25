// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     vector<vector<int>> adj_list(n, vector<int>());

//     for (int i = 0; i < e; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         adj_list[a].push_back(b);
//         adj_list[b].push_back(a);
//     }

//     int q;
//     cin >> q;
//     for (int i = 0; i < q; i++)
//     {
//         int x;
//         cin >> x;
//         for (auto x : adj_list[x])
//         {
//             cout << x << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> adj_list(n, vector<int>());

    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        sort(adj_list[x].begin(), adj_list[x].end(), greater<int>());
        if (adj_list[x].empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            for (auto x : adj_list[x])
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}