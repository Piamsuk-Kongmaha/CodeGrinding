#include<bits/stdc++.h>

using namespace std;

#define ll long long 

int main()
{
    const ll mod = 1e9+7;
    int n;
    cin >> n;
    vector<int> memo(n+1);
    
    memo[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=n && j <= i; j++)
        {
            memo[i] = (memo[i] + memo[i-j]) % mod;
        }
    }
    cout << memo[n];
}