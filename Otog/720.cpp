#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, int> pii;
const ll INF = LLONG_MAX;

vector<vector<pii>> adj; 
vector<ll> t; 
int a, b;
ll g;

ll dijkstra(ll wait_time) {
    vector<ll> dist(adj.size(), INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[a] = 0;
    pq.push({0, a});

    while (!pq.empty()) {
        int u = pq.top().second;
        ll d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto &edge : adj[u]) {
            int v = edge.second;
            ll w = edge.first;

            if (t[v] > wait_time) continue;

            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist[b];
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    char a_str[101], b_str[101];
    scanf("%100s %100s %lld", a_str, b_str, &g);

    unordered_map<string, int> star_to_index;
    int index = 0;
    auto get_index = [&](const string &p) -> int {
        if (star_to_index.find(p) == star_to_index.end()) {
            star_to_index[p] = index++;
        }
        return star_to_index[p];
    };

    a = get_index(a_str);
    b = get_index(b_str);

    adj.resize(n);
    t.resize(n);

    ll max_ti = 0;
    for (int i = 0; i < n; i++) {
        char p_str[101];
        ll ti;
        scanf("%100s %lld", p_str, &ti);
        string p(p_str);
        int idx = get_index(p);
        t[idx] = ti;
        if (ti > max_ti) max_ti = ti;
    }

    for (int i = 0; i < m; i++) {
        char u_str[101], v_str[101];
        ll w;
        scanf("%100s %100s %lld", u_str, v_str, &w);
        int u = get_index(u_str);
        int v = get_index(v_str);
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }

    ll low = 0, high = max_ti, ans_time = INF, ans_fuel = INF;

    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll fuel = dijkstra(mid);

        if (fuel <= g) {
            ans_time = mid;
            ans_fuel = fuel;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%lld %lld\n", ans_time, ans_fuel);

    return 0;
}
