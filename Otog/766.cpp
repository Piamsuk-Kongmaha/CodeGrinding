#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;


struct Edge {
    int destination;
    int weight;
};

vector<int> dijkstra(const vector<vector<Edge>>& graph, int source) {
    int n = graph.size();
    vector<int> distance(n, numeric_limits<int>::max());
    

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    distance[source] = 0;
    pq.push({0, source});
    
    while (!pq.empty()) {
        int dist = pq.top().first;
        int curr = pq.top().second;
        pq.pop();
        

        if (dist > distance[curr]) continue;
        

        for (const auto& edge : graph[curr]) {
            int next = edge.destination;
            int w = edge.weight;
            

            if (distance[curr] + w < distance[next]) {
                distance[next] = distance[curr] + w;
                pq.push({distance[next], next});
            }
        }
    }
    
    return distance;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, k, q;
    cin >> n >> m >> k >> q;
    

    vector<vector<Edge>> graph(n);
    

    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        

        graph[u].push_back({v, w});
        graph[v].push_back({u, w});
    }
    

    vector<int> restaurants(k);
    for (int i = 0; i < k; ++i) {
        cin >> restaurants[i];
    }
    

    vector<bool> visit(n, false);
    vector<vector<int>> distances(n);
    

    for (int i = 0; i < k; ++i) {
        int restaurant = restaurants[i];
        distances[restaurant] = dijkstra(graph, restaurant);
        visit[restaurant] = true;
    }
    

    for (int i = 0; i < q; ++i) {
        int s, x, t;
        cin >> s >> x >> t;
        

        if (!visit[s]) {
            distances[s] = dijkstra(graph, s);
            visit[s] = true;
        }
        
        int total = distances[s][x] + distances[x][t];
        cout << total << endl;
    }
    
    return 0;
}