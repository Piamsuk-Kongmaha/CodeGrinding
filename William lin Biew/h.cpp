#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pii;
const ll INF = LLONG_MAX; 

vector<vector<pii>> adj;
vector<ll> t;
ll n, m, a, b, g;

ll dijkstra(ll wait_time) {
    vector<ll> dist(n, INF);
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[a] = 0;
    pq.push({0, a});

    while (!pq.empty()) {
        ll u = pq.top().second;
        ll d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (auto &edge : adj[u]) {
            ll v = edge.first;
            ll w = edge.second;

            if (t[v] > wait_time) continue;

            if (dist[v] > dist[u] + w && dist[u] + w >= 0) { // Check for overflow
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist[b];
}

int main() {
    scanf("%lld %lld", &n, &m);
    scanf("%lld %lld %lld", &a, &b, &g);

    adj.resize(n);
    t.resize(n);

    unordered_map<string, ll> star_to_index;
    ll index = 0;

    auto get_index = [&](const string &p) -> ll {
        if (star_to_index.find(p) == star_to_index.end()) {
            star_to_index[p] = index++;
        }
        return star_to_index[p];
    };

    ll max_ti = 0; 
    for (ll i = 0; i < n; i++) {
        char p_str[101];
        ll ti;
        scanf("%100s %lld", p_str, &ti);
        string p(p_str);
        ll idx = get_index(p);
        t[idx] = ti;
        if (ti > max_ti) max_ti = ti; 
    }

    for (ll i = 0; i < m; i++) {
        char u_str[101], v_str[101];
        ll w;
        scanf("%100s %100s %lld", u_str, v_str, &w);
        string u(u_str), v(v_str);
        ll u_idx = get_index(u);
        ll v_idx = get_index(v);
        adj[u_idx].push_back({v_idx, w});
        adj[v_idx].push_back({u_idx, w});
    }
    a = get_index(to_string(a));
    b = get_index(to_string(b));

    ll low = 0, high = max_ti, ans_time = INF, ans_fuel = INF;

    while (low <= high) {
        ll mid = low + (high - low) / 2; 
        ll fuel = dijkstra(mid);

        if (fuel <= g && fuel >= 0) { 
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