#include <bits/stdc++.h>
#define int long long
using namespace std;

unordered_map<string, int> pw;

int think(const string& bits, unordered_map<string, int>& dp) {
    if (bits.find('1') == string::npos) {
        return 0;
    }

    if (dp.find(bits) != dp.end()) {
        return dp[bits];
    }

    int maxVal = 0;

    if (pw.find(bits) != pw.end()) {
        maxVal = pw[bits];
    }

    for (int i = 0; i < bits.size(); ++i) {
        if (bits[i] == '1') {
            string newBits = bits;
            newBits[i] = '0';
            maxVal = max(maxVal, pw[bits] + think(newBits, dp));
        }
    }

    for (int i = 0; i < bits.size() - 1; ++i) {
        if (bits[i] == '1' && bits[i + 1] == '1') {
            string newBits = bits;
            newBits[i] = '0';
            newBits[i + 1] = '0';
            maxVal = max(maxVal, pw[bits] + think(newBits, dp));
        }
    }
    
    dp[bits] = maxVal;
    return maxVal;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, Q;
    cin >> N >> Q;

    for (int i = 0; i < (1 << N); ++i) {
        string bits;
        int weight;
        cin >> bits >> weight;
        pw[bits] = weight;
    }

    vector<string> queries(Q);
    for (int i = 0; i < Q; ++i) {
        cin >> queries[i];
    }

    unordered_map<string, int> dp; 
    for (const string& query : queries) {
        cout << think(query, dp) << endl;
    }

    return 0;
}