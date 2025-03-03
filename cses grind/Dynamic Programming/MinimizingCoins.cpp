#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define inf 100000001

int main()
{
    int n, sum;
    cin >> n >> sum;
    vector<ll> dp(sum+1, inf);
    vector<int> coins(n);
    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    dp[0] = 0;
    for(int i = 1; i <= sum; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(coins[j] > i  || dp[i - coins[j]] == inf)
            {
                continue;
            }else dp[i] = min(dp[i], dp[i - coins[j]] + 1);
   
        }
    }
    if(dp[sum] == inf)
    {
        cout << "-1";
    }  else cout << dp[sum];
}