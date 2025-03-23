#include <bits/stdc++.h>
 
using namespace std;
#define ll long long
 
int main()
{
	ll sum = 10;
    vector<ll> dp(sum+1);
    ll coins[4] = {25,10,5,1};
    dp[0] = 1;
    for(int i = 1; i <= sum; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(coins[j] <= i)
            {
                dp[i] = (dp[i] + dp[i-coins[j]]);
            }
            
        }
    }
    cout << dp[sum] << '\n';
}