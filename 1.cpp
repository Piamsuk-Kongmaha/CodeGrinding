#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N;
    cin >> N;
    vector<vector<ll>> a(4, vector<ll>(N));
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> a[i][j];
        }
    }
 
    if (N == 1) {
        ll max_val = 0;
        for (int i = 0; i < 4; ++i) {
            max_val = max(max_val, a[i][0]);
        }
        cout << max_val << '\n';
        return 0;
    }
 
    vector<vector<vector<ll>>> dp(N, vector<vector<ll>>(4, vector<ll>(4, -1)));
 
    for (int t1 = 0; t1 < 4; ++t1) {
        for (int t2 = 0; t2 < 4; ++t2) {
            if (t1 != t2) {
                dp[0][t1][t2] = a[t1][0] + a[t2][N - 1];
            }
        }
    }
 
    for (int j = 1; j < N / 2; ++j) {
        int mirror_j = N - 1 - j;
        for (int prev_t1 = 0; prev_t1 < 4; ++prev_t1) {
            for (int prev_t2 = 0; prev_t2 < 4; ++prev_t2) {
                if (prev_t1 == prev_t2) continue;
                if (dp[j - 1][prev_t1][prev_t2] == -1) continue;
                for (int curr_t1 = 0; curr_t1 < 4; ++curr_t1) {
                    if (curr_t1 == prev_t1) continue;
                    for (int curr_t2 = 0; curr_t2 < 4; ++curr_t2) {
                        if (curr_t2 == prev_t2) continue;
                        if (curr_t1 == curr_t2) continue;
                        ll new_val = dp[j - 1][prev_t1][prev_t2] + a[curr_t1][j] + a[curr_t2][mirror_j];
                        if (new_val > dp[j][curr_t1][curr_t2]) {
                            dp[j][curr_t1][curr_t2] = new_val;
                        }
                    }
                }
            }
        }
    }
 
    ll max_total = 0;
    if (N % 2 == 0) {
        for (int t1 = 0; t1 < 4; ++t1) {
            for (int t2 = 0; t2 < 4; ++t2) {
                if (t1 == t2) continue;
                if (dp[N / 2 - 1][t1][t2] > max_total) {
                    max_total = dp[N / 2 - 1][t1][t2];
                }
            }
        }
    } else {
        int middle_j = N / 2;
        for (int t1 = 0; t1 < 4; ++t1) {
            for (int t2 = 0; t2 < 4; ++t2) {
                if (t1 == t2) continue;
                if (dp[middle_j - 1][t1][t2] == -1) continue;
                for (int curr_t = 0; curr_t < 4; ++curr_t) {
                    if (curr_t == t1 || curr_t == t2) continue;
                    ll current_val = dp[middle_j - 1][t1][t2] + a[curr_t][middle_j];
                    if (current_val > max_total) {
                        max_total = current_val;
                    }
                }
            }
        }
    }
 
    cout << max_total << '\n';
 
    return 0;
}