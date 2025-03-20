#include <bits/stdc++.h>
using namespace std;

bool check(long long mid, vector<int>& a, int m, int k) {
    long long total = 0;
    for (int i = 0; i < m; ++i) {
        total += mid / a[i];
        if (total >= k) return true;
    }
    return total >= k;
}

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m ;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    a.resize(m);

    long long left = 1, right = 1e18, result = right;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (check(mid, a, m, k)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << result << '\n';
    return 0;
}