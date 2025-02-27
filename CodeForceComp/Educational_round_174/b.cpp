#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n, m;
        cin >> n >> m;  
        
        int total = n * m;
    
        vector<int> grid(total);
        for (int i = 0; i < total; i++) {
            cin >> grid[i];
        }
        
        int size = total + 1; 
        vector<int> Cost(size, 0);  
        vector<char> res(size, 0);  
        for (int i = 0; i < total; i++) {
            int c = grid[i];
            if (!res[c]) {
                res[c] = 1;
                Cost[c] = 1;  
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int idx = i * m + j;
                int c = grid[idx];
                if (j + 1 < m) {  
                    if (grid[idx + 1] == c) {
                        Cost[c] = 2;
                    }
                }
                if (i + 1 < n) {  
                    int idx2 = (i + 1) * m + j;
                    if (grid[idx2] == c) {
                        Cost[c] = 2;
                    }
                }
            }
        }
        
        long long S = 0;
        int best = 0;
        for (int c = 1; c < size; c++) {
            if (res[c]) {
                S += Cost[c];
                if (Cost[c] > best) {
                    best = Cost[c];
                }
            }
        }
        int ans = static_cast<int>(S - best);
        cout << ans << endl;
    }

    return 0;
}
