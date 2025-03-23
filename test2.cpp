// use Deepseek to solve this shit

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

// Function to find the maximum m using binary search
int findMaxM(const vector<pair<int, int>>& treasures, int k) {
    int left = 0;
    int right = 1e9; // Maximum possible difference
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (isPossible(treasures, k, mid)) {
            result = mid; // Update result
            left = mid + 1; // Try for a larger m
        } else {
            right = mid - 1; // Try for a smaller m
        }
    }

    return result;
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