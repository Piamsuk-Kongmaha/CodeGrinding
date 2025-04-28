#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<ll, ll> pll;

const ll INF = LLONG_MAX;


void dijkstra(ll start, const vector<vector<pll>>& adj, vector<ll>& dist)
{
    priority_queue<pll, vector<pll>, greater<pll>> pq;
    dist[start] = 0;
    pq.push({0,start});
    while(!pq.empty())
    {
        ll curr = pq.top().first;
        ll u = pq.top().second;
        pq.pop();

        if(curr > dist[u]) continue;
        for(const auto& edge : adj[u]){
            ll v = edge.first;
            ll w = edge.second;

            if(dist[v] > dist[u] + w)
            {
                dist[v] = dist[u] + w;
                pq.push({dist[v] ,v});
            }
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m,q;
    cin >> n >> m >> q;
    ll s,t;
    cin >> s >> t;

    vector<vector<pll>> adj(n);
    vector<tuple<ll, ll ,ll>> edges;

    for(ll i = 0; i < m; i++)
    {
        ll u,v,w;
        cin >> u >> v>> w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
        edges.emplace_back(u,v,w);

    }

    vector<ll> dist_s(n,INF);
    dijkstra(s, adj, dist_s);

    vector<ll> dist_t(n,INF);
    dijkstra(t, adj, dist_t);

    while(q--)
    {
        ll x;
        cin >> x;
        auto [u,v,w] = edges[x];
        ll path1 = dist_s[u] + w + dist_t[v];
        ll path2 = dist_s[v] + w + dist_t[u];
        ll ans = min(path1, path2);
        if(ans >= INF)
        {
            cout << "-1\n";
        }else{
            cout << ans << '\n';
        }

    }

    return 0;
}