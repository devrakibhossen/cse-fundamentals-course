#include <bits/stdc++.h>
using namespace std;

bool isValid(int r, int c, int n, int m)
{
    if (r >= 0 && r < n && c >= 0 && c < m)
    {
        return true;
    }
    else
    {
        return false;
    }
}

vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};

void dfs(int si, int sj, vector<vector<char>> &grid, vector<vector<bool>> &visited)
{
    visited[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + dx[i];
        int cj = sj + dy[i];

        if (isValid(ci, cj, grid.size(), grid[0].size()) && visited[ci][cj] == false && grid[ci][cj] == '.' && grid[ci][cj] == 'B')
        {
            dfs(ci, cj, grid, visited);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    int flag = 0;
    int si, sj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
        }
    }
    dfs(si, sj, grid, visited);

    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}