#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;
   vector<int> platform(n);
   vector<int> dp(n+1);

   for(int i = 0; i < n; i++) cin >> platform[i];

   dp[1] = 0;
   dp[2] = abs(platform[1] - platform[0]);

   for(int i = 3 ; i <= n; i++)
   {
        int sum1 = dp[i-1] + abs(platform[i-1] - platform[i-2]);
        int sum2 = dp[i-2] + abs(platform[i-1] - platform[i-3]);
        dp[i] = min(sum1 , sum2);
    }
       
   cout << dp[n];

}