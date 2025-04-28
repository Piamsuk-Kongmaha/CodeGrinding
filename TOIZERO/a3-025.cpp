#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, w, l;
    cin >> n >> w >> l;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        v[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> v[i][j];
        }
        sort(v[i].begin(), v[i].end()); 
    }
    
    set<int> cand;
    for (int i = 0; i < n; i++) {
        for (int hole : v[i]) {
            for (int d = -l; d <= l; d++) {
                int pos = hole + d;
                if (pos >= 1 && pos <= w) {
                    cand.insert(pos);
                }
            }
        }
    }
    
    for (int s : cand) {
        bool ok = true;
        for (int i = 0; i < n; i++) {
            auto it = lower_bound(v[i].begin(), v[i].end(), s - l);
            if (it == v[i].end() || *it > s + l) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "1\n";
            return 0;
        }
    }
    
    cout << "0\n";
    return 0;
}