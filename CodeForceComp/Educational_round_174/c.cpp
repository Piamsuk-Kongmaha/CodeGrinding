#include <iostream>
#include <vector>

#define MOD 998244353

using namespace std;

int main() {
    int t;
    cin >> t;  
    const int MAXP = 200000 + 5;
    vector<long long> pow2(MAXP, 1); 
    vector<long long> invPow2(MAXP, 1); 

    for (int i = 1; i < MAXP; i++) {
        pow2[i] = (pow2[i - 1] * 2LL) % MOD;
    }

    long long inv2 = 499122177; 
    for (int i = 1; i < MAXP; i++) {
        invPow2[i] = (invPow2[i - 1] * inv2) % MOD;
    }

    while (t--) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        long long ans = 0;
        long long sum1 = 0;
        int count1 = 0;  
        int count2 = 0;    
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                sum1 = (sum1 + invPow2[count2]) % MOD;
                count1++;
            } else if (a[i] == 2) {
                count2++;
            } else if (a[i] == 3) {
                long long contrib = ((pow2[count2] * sum1) % MOD - count1) % MOD;
                if (contrib < 0) contrib += MOD;
                ans = (ans + contrib) % MOD;
            }
        }

        cout << ans << endl;  
    }

    return 0;
}