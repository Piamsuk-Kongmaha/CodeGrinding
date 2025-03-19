#include <iostream>
#include <vector>
using namespace std;

const int MOD = 100000007;

int main() {
    int n;
    cin >> n;

    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(3, vector<int>(3, 0)));

    for (int y = 0; y < 3; y++) {
        dp[1][0][y] = 1; 
    }

    for (int i = 2; i <= n; i++) {
        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) { 
                for (int z = 0; z < 3; z++) { 
                    if (z == 1) {
                        if (x == 2 || y == 2) continue;
                    }
                    if (z == 2) {
                        if (x == 1  ||  y == 1) continue;
                    }
                    dp[i][y][z] = (dp[i][y][z] + dp[i - 1][x][y]) % MOD;
                }
            }
        }
    }

    int result = 0;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            result = (result + dp[n][x][y]) % MOD;
        }
    }

    cout << result << '\n';

    return 0;
}