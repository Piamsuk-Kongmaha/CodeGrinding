#include <bits/stdc++.h>
using namespace std;
vector<vector<pair<int,int>>> path(30100);
#define pii pair<int,int>
int n, m, k, q;
int walk(int n, int m, int r){
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    vector<int>dist(30100,INT_MAX);
    dist[m] = 0;
    pq.push({0,m});
    while(!pq.empty()){
        auto [w,u] = pq.top();
        pq.pop();
        if(dist[u] < w) continue;
     //   dist[u] = w;
        for(auto [v,x] : path[u]){
            if(dist[v] <= w + x) continue;
            dist[v] = w+x;
            pq.push({w+x,v});
        }
    }
    return dist[n] + dist[r];
}
int32_t main(){
    cin.tie(nullptr)->sync_with_stdio(0);
    cin >> n >> m >> k >> q;
    while(m--){
        int u, v, w;
        cin >> u >> v >> w;
        path[u].push_back({v,w});
        path[v].push_back({u,w});
    }
    while(k--){
        int t;
        cin >> t;
    }
    while(q--){
        int s, x, t, ans = 0; // s -> x -> t
        cin >> s >> x >> t;
      //  if(s != x) ans += walk(s,x);
      //  if(x != t) ans += walk(x,t);
        cout << walk(s,x,t) << '\n';
       // cout << ans << '\n';
    }
}