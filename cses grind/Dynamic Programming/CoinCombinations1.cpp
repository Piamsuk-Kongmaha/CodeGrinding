#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    const int MOD = 1e9+7;
    int n, sum;
    cin >> n >> sum;
    vector<ll> dp(sum+1);
    vector<int> coins(n);
    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    dp[0] = 1;
    for(int i = 1; i <= sum; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(coins[j] <= i)
            {
                dp[i] = (dp[i] + dp[i-coins[j]]) % MOD;
            }
            
        }
    }
    cout << dp[sum];
}