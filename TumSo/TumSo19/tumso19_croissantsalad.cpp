#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 305;

int n, m;
vector<vector<int>> graph(MAX_N);
vector<bool> used(MAX_N);
vector<int> match_out(MAX_N, -1), match_in(MAX_N, -1);
int existing_edges = 0;

bool dfs(int u) {
    if (used[u]) return false;
    used[u] = true;
    
    for (int v : graph[u]) {
        if (match_in[v] == -1 || dfs(match_in[v])) {
            match_out[u] = v;
            match_in[v] = u;
            return true;
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    
    vector<vector<bool>> hasEdge(n+1, vector<bool>(n+1, false));
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        
        graph[u].push_back(v);
        
        hasEdge[u][v] = true;
        existing_edges++;
    }
    
    int matching_size = 0;
    for (int u = 1; u <= n; u++) {
        fill(used.begin(), used.end(), false);
        if (dfs(u)) {
            matching_size++;
        }
    }
    
    int kept_edges = 0;
    for (int u = 1; u <= n; u++) {
        if (match_out[u] != -1 && hasEdge[u][match_out[u]]) {
            kept_edges++;
        }
    }
    
   
    int total_cost = (existing_edges - kept_edges) + (matching_size - kept_edges);
    
    if (matching_size < n) {
        total_cost += n - matching_size;
    }
    
    cout << total_cost << endl;
    
    return 0;
}