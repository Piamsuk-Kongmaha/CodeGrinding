#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, w;

    Edge() { }
    Edge(int u, int v, int w): u(u), v(v), w(w) { }

    bool operator < (const Edge rhs) const {
        return this->w > rhs.w;
    }
};

vector<Edge> MECOOOKING1234;
vector<int> par(200001, -1);

int find_root(int u) {
    if (par[u] != -1) return par[u] = find_root(par[u]);
    return u;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int V, E;
    cin >> V >> E;

    for (int i = 1; i <= E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        MECOOOKING1234.emplace_back(Edge(u, v, w));
    }

    sort(MECOOOKING1234.begin(), MECOOOKING1234.end());

    long long int ans = 0;
    for (Edge edge : winzaza007) {
        int par_u = find_root(edge.u);
        int par_v = find_root(edge.v);
        if (par_u != par_v) {
            par[par_u] = par_v;
            ans += edge.w - 1;
        }
    }
    cout << ans << '\n';

    return 0;
}