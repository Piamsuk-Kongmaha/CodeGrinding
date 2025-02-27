#include <iostream>
#include <algorithm>
using namespace std;

bool contains7(long long x) {
    while (x > 0) {
        if (x % 10 == 7) return true;
        x /= 10;
    }
    return false;
}

bool solve(long long n, int r) {
    long long A = n - r;
    int digit[20] = {0};
    int len = 0;
    if (A == 0) {
        digit[len++] = 0;
    } else {
        while (A > 0) {
            digit[len++] = A % 10;
            A /= 10;
        }
    }
    int L = max(len, 12);
    const int maxcarry = 40;
    int dp[32][42] = {0}, dp2[32][42] = {0};
    dp[r][0] = 1;

    for (int pos = 0; pos < L; pos++) {
        for (int i = 0; i <= r; i++)
            for (int j = 0; j < maxcarry; j++)
                dp2[i][j] = 0;

        int d = (pos < len ? digit[pos] : 0);

        for (int rem = 0; rem <= r; rem++) 
        {
            for (int carry = 0; carry < maxcarry; carry++) 
            {
                int cur = dp[rem][carry];
                if (cur == 0) continue;
                for (int add = 0; add <= rem; add++) 
                {
                    int total = d + carry + add;
                    int digit2 = total % 10;
                    int carry2 = total / 10;
                    if (carry2 >= maxcarry) continue;
                    int rem2 = rem - add;
                    int cur2 = cur;
                    if (digit2 == 7) cur2 |= 2;
                    dp2[rem2][carry2] |= cur2;
                }
            }
        }
        for (int i = 0; i <= r; i++)
            for (int j = 0; j < maxcarry; j++)
                dp[i][j] = dp2[i][j];
    }
    return (dp[0][0] & 2) != 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (contains7(n)) {
            cout << 0 << "\n";
            continue;
        }
        int ans = -1;
        for (int r = 1; r <= 30; r++) {
            if (solve(n, r)) {
                ans = r;
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}   