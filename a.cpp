#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define MIN -1e18

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m; cin >> n >> m;
    vector<vector<ll>> a(n,vector<ll>(m));
    vector<vector<ll>> dp(n,vector<ll>(m,MIN));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int j= 0; j < m; j++)
    {
        dp[n-1][j] = a[n-1][j];
    }

    for(int i = n-2; i>=0; i--)
    {
        vector<ll> r(m);
        r[0] = dp[i+1][0] + a[i][0];
        for(int j = 1; j < m; j++)
        {
            r[j] = max(r[j-1] + a[i][j], dp[i+1][j] + a[i][j]);
        }

        vector<ll> l(m);
        l[m-1] = dp[i+1][m-1] + a[i][m-1];
        for(int j = m-2; j >= 0; j--)
        {
            l[j] = max(l[j+1] + a[i][j] , dp[i+1][j] + a[i][j]);
        }
        for(int j = 0; j < m; j++)
        {
            dp[i][j] = max(r[j] , l[j]);
        }
    }
    for(int i =0 ; i <m; i++)
    {
        cout << dp[0][i] << ' ';
    }

}