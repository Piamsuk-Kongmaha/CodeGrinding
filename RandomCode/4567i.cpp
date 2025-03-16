#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

using namespace std;

const int MAXN = 200005;
const int INF = 1e9;

int n, m, t;
vector<int> adj[MAXN]; // Adjacency list for the graph
vector<int> a(MAXN), b(MAXN), c(MAXN); // Restaurant, coffee, printing shops

// DP tables
vector<int> dp_breakfast(MAXN, -INF); // Max printing shops after breakfast
vector<int> dp_coffee(MAXN, -INF);    // Max printing shops after coffee

// BFS to compute DP tables
void bfs(int start, vector<int>& dp, bool is_breakfast) {
    queue<int> q;
    q.push(start);
    dp[start] = (is_breakfast ? 0 : c[start]);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dp[v] < dp[u] + c[v]) {
                dp[v] = dp[u] + c[v];
                q.push(v);
            }
        }
    }
}

int main() {
    // Optimize input/output
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Input reading
    cin >> n >> m >> t;
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i];
    for (int i = 1; i <= n; ++i) cin >> c[i];

    // Precompute DP tables
    for (int i = 1; i <= n; ++i) {
        if (a[i]) {
            bfs(i, dp_breakfast, true);
        }
        if (b[i]) {
            bfs(i, dp_coffee, false);
        }
    }

    // Combine results
    int max_copy_shops = -1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j) continue; // Different starting points
            if (dp_breakfast[i] == -INF || dp_coffee[j] == -INF) continue;

            // Ensure disjoint routes and different breakfast/coffee stops
            if (i != j && a[i] && b[j]) {
                int total = dp_breakfast[i] + dp_coffee[j];
                if (total > max_copy_shops) {
                    max_copy_shops = total;
                }
            }
        }
    }

    // Output the result
    cout << max_copy_shops << '\n';

    return 0;
}