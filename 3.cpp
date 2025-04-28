#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,o;
    cin >> n >> m >> o;
    vector<vector<char>> garden(n,vector<char>(m,'.'));

    while(o--)
    {
        int x,y,k;
        cin >> x >> y >> k;

        garden[x][y] = '#';

        for(int r = 1; r <= k; r++)
        {
            if(x - r >= 0 && garden[x-r][y] != '#') garden[x-r][y] = '*';
            if(x + r < n  && garden[x+r][y] != '#')garden[x+r][y] = '*';
            if(y - r >= 0 && garden[x][y - r] != '#') garden[x][y - r] = '*';
            if(y + r < m  && garden[x][y + r] != '#') garden[x][y + r] = '*';
        }


        for(int r = 1; r <= k ; r++)
        {
            for(int dx = -r; dx <=r ; dx++)
            {
                for(int dy = -r; dy <=r; dy++)
                {
                    if(abs(dx) + abs(dy) != r) continue;
                    int nx = x + dx;
                    int ny = y + dy;
                    if(nx >= 0 && nx < n && ny >=0 && ny < m  && garden[nx][ny] != '#')
                    {
                        garden[nx][ny] = '*';
                    }
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << garden[i][j];
        }
        cout << '\n';
    }

    return 0;
}