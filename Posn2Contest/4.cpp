#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int max_or = 0;
    for (int num : a) max_or |= num;

    int count = 0;
    for (int num : a) if (num == max_or) count++;

    if (count > 0) {
        long long ans = 1;
        for (int i = 0; i < count; ++i) ans = (ans * 2) % MOD;
        cout << ans << '\n';
    } else {
        long long ans = 1;
        for (int i = 0; i < n; ++i) {
            if ((a[i] | max_or) == max_or) {
                ans = (ans * 2) % MOD;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}