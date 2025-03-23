#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 10005;
const int INF = 1e9;

int N, V, W;
vector<int> prices;
int dp[MAX_N][MAX_N];

vector<int> odd_prefix, even_prefix;

void precompute_prefix_sums() {
    odd_prefix.resize(N + 1, 0);
    even_prefix.resize(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        odd_prefix[i] = odd_prefix[i - 1] + (prices[i - 1] % 2 == 1 ? prices[i - 1] : 0);
        even_prefix[i] = even_prefix[i - 1] + (prices[i - 1] % 2 == 0 ? prices[i - 1] : 0);
    }
}

int get_odd_sum(int l, int r) {
    return odd_prefix[r] - odd_prefix[l];
}

int get_even_sum(int l, int r) {
    return even_prefix[r] - even_prefix[l];
}

int solve(int i, int segments) {
    if (i == N) {
        return segments;
    }

    if (dp[i][segments] != -1) {
        return dp[i][segments];
    }

    int result = INF;

    for (int len = 2; len <= N - i; len += 2) {
        int mid = i + len / 2;

        int a_sum = get_odd_sum(i, mid);
        int b_sum = get_even_sum(mid, i + len);

        if (a_sum > V || b_sum > W) {
            continue; 
        }

        int sub_result = solve(i + len, segments + 1);

        result = min(result, sub_result);
    }

    dp[i][segments] = result;
    return result;
}

int main() {
    cin >> N >> V >> W;
    prices.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> prices[i];
    }

    precompute_prefix_sums();

    memset(dp, -1, sizeof(dp));

    int result = solve(0, 0);

    if (result == INF) {
        cout << -1 << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}