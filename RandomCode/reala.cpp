#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        vector<vector<int>> color_positions(k + 1);
        for (int i = 0; i < n; ++i) {
            color_positions[c[i]].push_back(i);
        }

        int min_max_step = INT_MAX;

        for (int color = 1; color <= k; ++color) {
            if (color_positions[color].empty()) continue;

            vector<int> gaps;
            gaps.push_back(color_positions[color][0]); // gap before the first plank
            for (size_t i = 1; i < color_positions[color].size(); ++i) {
                gaps.push_back(color_positions[color][i] - color_positions[color][i - 1] - 1);
            }
            gaps.push_back(n - 1 - color_positions[color].back()); // gap after the last plank

            sort(gaps.begin(), gaps.end());
            int max_step = gaps.back();
            if (gaps.size() >= 2) {
                max_step = min(max_step, max(gaps[gaps.size() - 2], (gaps.back() + 1) / 2));
            }

            min_max_step = min(min_max_step, max_step);
        }

        cout << min_max_step << '\n';
    }

    return 0;
}