#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int N, Q;
    cin >> N >> Q;
 
    vector<int> Heat(N);
    for (int i = 0; i < N; ++i) {
        cin >> Heat[i];
    }
 
    vector<int> diff_left_to_right(N - 1, 0); 
    vector<int> diff_right_to_left(N - 1, 0); 
 
    for (int i = 0; i < N - 1; ++i) {
        int current_diff = abs(Heat[i] - Heat[i + 1]);
 
        if (i > 0) {
            int left_diff = abs(Heat[i] - Heat[i - 1]);
 
            if (current_diff > left_diff) {
                diff_left_to_right[i] = 0;
            } else {
                diff_left_to_right[i] = current_diff;
            }
 
            if (current_diff == left_diff) {
                diff_left_to_right[i] = 0;
            }
        } else {
            diff_left_to_right[i] = 0;
        }
    }
 
    for (int i = N - 2; i >= 0; --i) {
        int current_diff = abs(Heat[i + 1] - Heat[i]);
 
        if (i < N - 2) {
            int right_diff = abs(Heat[i + 2] - Heat[i + 1]);
 
            if (current_diff > right_diff) {
                diff_right_to_left[i] = 0;
            } else {
                diff_right_to_left[i] = current_diff;
            }
 
            if (current_diff == right_diff) {
                diff_right_to_left[i] = 0;
            }
        } else {
            diff_right_to_left[i] = 0;
        }
    }
 
    vector<long long> prefix_left_to_right(N, 0);
    for (int i = 1; i < N; ++i) {
        prefix_left_to_right[i] = prefix_left_to_right[i - 1] + diff_left_to_right[i - 1];
    }
 
    vector<long long> prefix_right_to_left(N, 0);
    for (int i = N - 2; i >= 0; --i) {
        prefix_right_to_left[i] = prefix_right_to_left[i + 1] + diff_right_to_left[i];
    }
 
    while (Q--) {
        int x_start, x_end;
        cin >> x_start >> x_end;
 
        x_start--;
        x_end--;
 
        if (x_start == x_end) {
            cout << 0 << '\n';
            continue;
        }
 
        if (x_start < x_end) {
            cout << prefix_left_to_right[x_end] - prefix_left_to_right[x_start] << '\n';
        } else {
            cout << prefix_right_to_left[x_end] - prefix_right_to_left[x_start] << '\n';
        }
    }
 
    return 0;
}