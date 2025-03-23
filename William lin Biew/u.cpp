#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, L;
    cin >> N >> M >> L;

    vector<int> n(L);
    for (int i = 0; i < L; ++i) {
        cin >> n[i];
    }

    vector<vector<pair<int, pair<int, int>>>> forward(L);
    vector<vector<pair<int, pair<int, int>>>> backward(L);

    for (int i = 0; i < M; ++i) {
        int U, V, S, W;
        cin >> U >> V >> S >> W;
        int zone_U = -1, zone_V = -1;
        int sum = 0;
        for (int j = 0; j < L; ++j) {
            if (U > sum && U <= sum + n[j]) {
                zone_U = j;
            }
            if (V > sum && V <= sum + n[j]) {
                zone_V = j;
            }
            sum += n[j];
        }
        if (zone_V == zone_U + 1) {
            forward[zone_U].push_back({V, {S, W}});
            backward[zone_V].push_back({U, {S, W}});
        }
    }

    vector<map<int, pair<int, int>>> dp_forward(L);
    dp_forward[0][1] = {0, 0};
    for (int i = 0; i < L - 1; ++i) {
        for (auto& [u, val] : dp_forward[i]) {
            for (auto& [v, sw] : forward[i]) {
                int new_F = val.first + (sw.first == 1 ? sw.second : 0);
                int new_G = val.second + (sw.first == 2 ? sw.second : 0);
                if (!dp_forward[i + 1].count(v) || dp_forward[i + 1][v].first + dp_forward[i + 1][v].second > new_F + new_G) {
                    dp_forward[i + 1][v] = {new_F, new_G};
                }
            }
        }
    }

    vector<map<int, pair<int, int>>> dp_backward(L);
    dp_backward[L - 1][N] = {0, 0};
    for (int i = L - 1; i > 0; --i) {
        for (auto& [v, val] : dp_backward[i]) {
            for (auto& [u, sw] : backward[i]) {
                int new_F = val.first + (sw.first == 1 ? sw.second : 0);
                int new_G = val.second + (sw.first == 2 ? sw.second : 0);
                if (!dp_backward[i - 1].count(u) || dp_backward[i - 1][u].first + dp_backward[i - 1][u].second > new_F + new_G) {
                    dp_backward[i - 1][u] = {new_F, new_G};
                }
            }
        }
    }

    int min_D = INT_MAX;
    for (int i = 0; i < L; ++i) {
        for (auto& [u, val_f] : dp_forward[i]) {
            if (dp_backward[i].count(u)) {
                auto& val_b = dp_backward[i][u];
                int D = (val_f.first - val_b.first) * (val_f.first - val_b.first) + (val_f.second - val_b.second) * (val_f.second - val_b.second);
                if (D < min_D) {
                    min_D = D;
                }
            }
        }
    }

    cout << min_D << endl;

    return 0;
}