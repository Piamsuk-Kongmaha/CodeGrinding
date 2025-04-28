#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, l;
    cin >> n >> l;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        return a.second < b.second;
    });
    
    int ans = 0;
    int last = -1;
    for (auto &p : v) {
        if (p.first > last) {
            ans++;
            last = p.second;
        }
    }
    
    cout << ans << "\n";
    return 0;
}