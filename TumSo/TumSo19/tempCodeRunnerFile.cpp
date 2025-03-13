#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9+7;

void solve()
{
    ll m;
    cin >> m;
    if(m == 1 || m== 2) cout << "NO";
    else cout << (m-3)%mod << '\n';
}

int main()
{
    ll n;
    cin >> n;
    while(n--) solve();
}