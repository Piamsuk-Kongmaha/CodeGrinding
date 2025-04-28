#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, s;
    cin >> n >> s;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    
    vector<bool> vis(n + 1, false);
    int ans = 0;
    int cur = s;
    
    while (true) {
        if (vis[cur]) break;
        vis[cur] = true;
        ans++;
        if (v[cur] == 0) break;
        cur = v[cur];
    }
    
    cout << ans << "\n";
    return 0;
}