#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if a given m is feasible using LDS
bool isPossible(const vector<pair<int, int>>& treasures, int k, int m) {
    vector<int> lds; // Longest Decreasing Subsequence (based on values)
    for (const auto& treasure : treasures) {
        int val = treasure.second;
        // Find the first element in lds that is <= val - m
        auto it = lower_bound(lds.begin(), lds.end(), val, greater<int>());
        if (it == lds.end()) {
            if (lds.empty() || lds.back() - val >= m) {
                lds.push_back(val); // Start a new sequence
            }
        } else {
            if (it == lds.begin() || *(it - 1) - val >= m) {
                *it = val; // Replace the element to extend the sequence
            }
        }
        if (lds.size() >= k) return true; // We've found a sequence of length >= k
    }
    return false; // No sequence of length >= k found
}

// Function to find the maximum m using LDS
int findMaxM(const vector<pair<int, int>>& treasures, int k) {
    int max_m = 0;

    // Find the maximum and minimum treasure values to compute max_diff
    int max_val = treasures[0].second;
    int min_val = treasures[0].second;
    for (const auto& treasure : treasures) {
        if (treasure.second > max_val) max_val = treasure.second;
        if (treasure.second < min_val) min_val = treasure.second;
    }
    int max_diff = max_val - min_val;

    // Try all possible m from max_diff down to 1
    for (int m = max_diff; m >= 1; --m) {
        if (isPossible(treasures, k, m)) {
            max_m = m; // Update the maximum m
            break; // Since we're iterating from the top, the first valid m is the maximum
        }
    }

    return max_m;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> treasures(n);
    for (int i = 0; i < n; ++i) {
        cin >> treasures[i].first >> treasures[i].second;
    }

    // Sort by coordinate in increasing order
    sort(treasures.begin(), treasures.end());

    // Find the maximum m
    int m = findMaxM(treasures, k);
    cout << m << '\n';

    return 0;
}