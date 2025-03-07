#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n ,m;
   cin >> n >> m;
   vector<int> platform(n+1);
   vector<int> dp(n+1 , 1e9);

   for(int i = 1; i <= n; i++)
   {
      cin >> platform[i];
   }
   dp[1] = 0;

   for(int i = 2;i <= n; i++)
   {
      for(int j = i-1; j >= max(1, i - m); j-- )
      {
         dp[i] = min(dp[i] , dp[j] + abs(platform[i] - platform[j]));
      }
   }
   cout << dp[n];

}