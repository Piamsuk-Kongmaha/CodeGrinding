#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, m;
    cin >> n >> m;
    
    vector<ll> a(m), t(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }
    
    // Min heap for the next available time of each program
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    
    // Initially all programs are available at time 0
    for (int i = 0; i < m; i++) {
        pq.push({0, i});
    }
    
    ll remaining_data = n;
    
    while (remaining_data > 0) {
        // Get the next available program
        auto [time, idx] = pq.top();
        pq.pop();
        
        // Extract data with this program
        ll data_extracted = min(remaining_data, a[idx]);
        remaining_data -= data_extracted;
        
        // Schedule this program to be available again after it finishes
        pq.push({time + t[idx], idx});
    }
    
    // The last program to finish determines the total time
    ll result = 0;
    while (!pq.empty()) {
        result = pq.top().first;
        pq.pop();
    }
    
    cout << result << "\n";
    return 0;
}