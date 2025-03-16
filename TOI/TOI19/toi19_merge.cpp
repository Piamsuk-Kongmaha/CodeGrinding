#include <iostream>
#include <algorithm>

using namespace std;
const int N = 1e5+2;

int x[N], y[N], s[N], t[N];

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    
    for (int i = 0; i < n; i++)
        cin >> x[i];
    
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        s[i] += s[i-1];
    }
    
    for (int i = 0; i < m; i++)
        cin >> y[i];
    
    for (int i = 1; i <= m; i++) {
        cin >> t[i];
        t[i] += t[i-1];
    }
    
    while (q--) {
        int a, b, k;
        cin >> a >> b >> k;
        int l = -1e9, r = 1e9;
        
        while (l < r) {
            int mid = (l+r) >> 1;
            int xx = s[upper_bound(x, x+n, mid) - x];
            int yy = t[upper_bound(y, y+m, (mid-b)/a) - y];
            
            if (xx + yy >= k)
                r = mid;
            else
                l = mid + 1;
        }
        
        cout << l << endl;
    }
}