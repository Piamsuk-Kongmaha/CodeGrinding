
#include <bits/stdc++.h>
using namespace std;

bool ch(vector<vector<int>> &M, int r, int c, int rows, int cols) {
      
    return (r >= 0 && r < rows) && (c >= 0 && c < cols) && (M[r][c] == 1);
}

void dfs(vector<vector<int>> &M, int r, int c, int rows, int cols, int &area) {
    
    vector<int> dirR = {-1, -1, -1, 0, 0, 1, 1, 1};
    vector<int> dirC = {-1, 0, 1, -1, 1, -1, 0, 1};
    
      area += 1;
      
    M[r][c] = 0;

    for (int i = 0; i < 8; i++) {
          int newR = r + dirR[i];
          int newC = c + dirC[i];
          
        if (ch(M, newR, newC, rows, cols))
            dfs(M, newR, newC, rows, cols, area);
    }
}

int think(vector<vector<int>> &M) {

      int rows = M.size(), cols = M[0].size();
  
    int maxArea = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
              
            if (M[i][j] == 1) {
                int area = 0;
                dfs(M, i, j, rows, cols, area);

                maxArea = max(maxArea, area);
            }
        }
    }
    return maxArea;
}

int main() {
    vector<vector<int>> M = {{0, 0, 1, 1, 0},
                             {1, 0, 1, 1, 0},
                             {0, 1, 0, 0, 0},
                             {0, 0, 0, 0, 1}};

    cout << think(M) << '\n';

    return 0;
}
