#include <bits/stdc++.h>

using namespace std;
const int MOD = 1e9+7;
typedef long long ll;

int main()
{
    int n,m; cin >> n >> m;
    vector<vector<ll>>dp(m+1, vector<ll>(n+2,0));
    for(int i =1; i <= n; i++) dp[1][i] = 1;

    for(int i = 1; i <= m; i++)
    {
        for(int j= 1; j<=n; j++)
        {
            if(i < m){  
                dp[i+1][j] = (dp[i+1][j] + dp[i][j]) % MOD;
                if(j+1 <= n) dp[i+1][j+1] = (dp[i+1][j+1] + dp[i][j]) % MOD;
                }
            if(j+1 <= n) dp[i][j+1] = (dp[i][j+1] + dp[i][j]) % MOD;
        }
    }
    ll ans=0;
    for(int i =1; i <= m; i++)
    {
        for(int j = 1; j <=n; j++)
        {
            ans = (ans+dp[i][j]) % MOD;
        }
    }

    cout << ans ;
}   