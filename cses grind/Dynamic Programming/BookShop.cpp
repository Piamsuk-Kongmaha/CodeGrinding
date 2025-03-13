#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> prices(n);
    vector<int> pages(n);
    for(int i = 0; i < n;i ++)
    {
        cin >> prices[i];
    }

    for(int i = 0; i < n;i ++)
    {
        cin >> pages[i];
    }

    vector<int> dp(m+1,0);

    for(int i = 0; i < n; i++)
    {
        for(int c = m; c > 0; c--)
        {
            if(prices[i] > c) continue;
            dp[c] = max(dp[c], pages[i] + dp[c - prices[i]]);
        }
    }
    cout << dp[m];
}