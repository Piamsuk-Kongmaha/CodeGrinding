#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    vector<vector<int>> grid(N+1, vector<int>(M+1, 0));
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> grid[i][j];
        }
    }
    
    const int INF = numeric_limits<int>::max();
    
    vector<vector<int>> dp(N+1, vector<int>(M+1, INF));
    
    dp[N][M] = max(1, 1 - grid[N][M]);
    
    for (int i = N; i >= 1; i--) {
        for (int j = M; j >= 1; j--) {
            if (i == N && j == M) continue;
            
            int rightHP = (j + 1 <= M) ? dp[i][j+1] : INF;
            int downHP = (i + 1 <= N) ? dp[i+1][j] : INF;
            
            int minNeededHP = min(rightHP, downHP);
            
            dp[i][j] = max(1, minNeededHP - grid[i][j]);
        }
    }
    
    cout << dp[1][1] << endl;
    
    return 0;
}