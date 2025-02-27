#include <bits/stdc++.h>
using namespace std;

int di[] = {0, 0, 1, -1, 1, 1, -1, -1};
int dj[] = {1, -1, 0, 0, 1, -1, 1, -1};
char a[30][30];

int main() {
    cin.tie(0)->ios_base::sync_with_stdio(0);
    
    int m, n;
    cin >> m >> n;
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            a[i][j] = toupper(a[i][j]);
        }
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        string x;
        cin >> x;
        
        for (char &c : x) {
            c = toupper(c);
        }
        
        if (x.size() == 1) {
            cout << "0 0\n";
            continue;
        }
        
        bool found = false;
        for (int i = 0; i < m && !found; i++) {
            for (int j = 0; j < n && !found; j++) {
                if (a[i][j] == x[0]) {
                    for (int k = 0; k < 8 && !found; k++) {
                        int cnt = 0;
                        for (int s = 1; s < x.size(); s++) {
                            int ii = i + di[k] * s;
                            int jj = j + dj[k] * s;
                            if (ii >= 0 && ii < m && jj >= 0 && jj < n && a[ii][jj] == x[s]) {
                                cnt++;
                            } else {
                                break;
                            }
                        }
                        if (cnt == x.size() - 1) {
                            cout << i << " " << j << "\n";
                            found = true;
                        }
                    }
                }
            }
        }
        
        if (!found) {
            cout << "-1 -1\n";  // Word not found
        }
    }
    
    return 0;
}