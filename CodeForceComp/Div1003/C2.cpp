#include <bits/stdc++.h>

using namespace std;

void solve() {
    int t;
    cin >> t;
    vector<string> outLines;
    
    for(int tc = 0; tc < t; tc++) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n), b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];
        
        sort(b.begin(), b.end());
        
        long long cur = -1e18;
        bool possible = true;
        
        for(int ai : a) {
            long long cand1 = (ai >= cur) ? ai : LLONG_MIN;
            long long needed = cur + ai;
            
            auto pos = lower_bound(b.begin(), b.end(), needed);
            long long cand2 = LLONG_MIN;
            if(pos != b.end()) {
                cand2 = *pos - ai;
            }
            
            long long best;
            if(cand1 == LLONG_MIN && cand2 == LLONG_MIN) {
                possible = false;
                break;
            } else if(cand1 == LLONG_MIN) {
                best = cand2;
            } else if(cand2 == LLONG_MIN) {
                best = cand1;
            } else {
                best = min(cand1, cand2);
            }
            
            cur = best;
        }
        
        outLines.push_back(possible ? "YES" : "NO");
    }
    for(int i = 0; i < outLines.size(); i++) {
        cout << outLines[i];
        if(i < outLines.size() - 1) cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    return 0;
}