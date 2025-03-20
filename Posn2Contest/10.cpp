#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long gcd(long long a, long long b) {
    return b == 0 ? a : gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int n;
    cin >> n;
    vector<pair<int, int>> ap(n);
    for (int i = 0; i < n; ++i) cin >> ap[i].first >> ap[i].second;
    long long result = 1;
    for (auto& [a, p] : ap) {
        long long temp = 1;
        for (int i = 0; i < p; ++i) temp = (temp * a) % MOD;
        result = lcm(result, temp) % MOD;
    }
    cout << result << '\n';
    return 0;
}