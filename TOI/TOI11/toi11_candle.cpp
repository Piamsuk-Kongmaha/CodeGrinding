#include <bits/stdc++.h>

using namespace std;
int c[2001][2001];

void dfs(int n, int m) {
    stack<pair<int, int>> stk;
    stk.push({n, m});
    
    int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
    int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

    while (!stk.empty()) {
        auto [i, j] = stk.top();
        stk.pop();

        for (int d = 0; d < 8; d++) {
            int ni = i + dx[d], nj = j + dy[d];
            if (c[ni][nj] == 1) {
                c[ni][nj] = 0;
                stk.push({ni, nj});
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,matches=0;
    cin >> a >> b;
    string d[a];

    for(int i = 0; i < a; i++)
    {
        cin >> d[i];
        for(int j= 0; j < b; j++)
        {
            c[i+1][j+1] = d[i][j] - '0';
        }
    }

    for(int i = 1; i <= a ;i++)
    {
        for(int j = 1; j <= b; j++)
        {
            if(c[i][j])
            {
                dfs(i,j);
                matches++;
            }
        }
    }
    cout << matches;
}