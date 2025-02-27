#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    vector<string> outlines;
    
    for(int tc = 0; tc < t; tc++) {
        int n, m;
        cin >> n >> m;
        vector<pair<long long, long long>> arrInfo;
        long long totalInternal = 0;
        
        for(int i = 0; i < n; i++) {
            long long s = 0;
            long long internal = 0;
            for(int j = 0; j < m; j++) {
                long long x;
                cin >> x;
                s += x;
                internal += s;
            }
            arrInfo.push_back({s, internal});
            totalInternal += internal;
        }
        sort(arrInfo.begin(), arrInfo.end(), 
             [](const pair<long long, long long>& a, const pair<long long, long long>& b) {
                 return a.first > b.first;
             });
        
        long long extra = 0;
        for(int i = 0; i < arrInfo.size(); i++) {
            long long coeff = n - 1 - i;
            extra += coeff * arrInfo[i].first;
        }
        extra *= m;
        
        long long ans = totalInternal + extra;
        outlines.push_back(to_string(ans));
    }
    
    for(int i = 0; i < outlines.size(); i++) {
        cout << outlines[i];
        if(i < outlines.size() - 1) cout << "\n";
    }
    return 0;
}