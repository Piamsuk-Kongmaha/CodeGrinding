#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MD = 1e9+7;

ll arr[301];
ll q[301];
ll dp[10][301][301];
bool vis[10][301][301];
ll n,k,d;

ll dfs(ll l, ll r, ll state)
{
    if(vis[state][l][r]) return dp[state][l][r];
    vis[state][l][r] = 1;
    if(state == k) return dp[state][l][r] = 1;
    ll sum = 0;
    for(int i = l; i < r; i++)
    {
        if(abs((q[i] - q[l-1]) - (q[r] - q[i]) ) <= d)
        {
            sum = (sum+=(dfs(l,i,state+1)*dfs(i+1,r,state+1))%MD)%MD;
        }
    }
    return dp[state][l][r] = sum;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
  cin >> n >> k >> d; 
  for(int i = 1; i <= n; i++)
  {
    cin >> arr[i];
    q[i] = q[i-1] + arr[i];
  } 
  cout << dfs(1,n,1);
  return 0;
}