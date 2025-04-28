#include <bits/stdc++.h>
using namespace std;

int w, h;
int a = 0, b = 0, c = 0;
vector<string> graph;
vector<vector<bool>> visited;

void dfs(int i, int j, int &minRow, int &maxRow, int &minCol, int &maxCol) {
    if (i < 0 || i >= h || j < 0 || j >= w) 
        return;
    
    if (graph[i][j] == '0' || visited[i][j]) 
        return;
    
    visited[i][j] = true;
    
    minRow = min(minRow, i);
    maxRow = max(maxRow, i);
    minCol = min(minCol, j);
    maxCol = max(maxCol, j);
    
    dfs(i + 1, j, minRow, maxRow, minCol, maxCol);
    dfs(i - 1, j, minRow, maxRow, minCol, maxCol);
    dfs(i, j + 1, minRow, maxRow, minCol, maxCol);
    dfs(i, j - 1, minRow, maxRow, minCol, maxCol);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> w >> h;
    
    graph.resize(h);
    visited.resize(h, vector<bool>(w, false));

    for (int i = 0; i < h; i++) cin >> graph[i];
    
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (graph[i][j] == '1' && !visited[i][j]) {
                int minRow = 1e9, maxRow = -1e9;
                int minCol = 1e9, maxCol = -1e9;
                dfs(i, j, minRow, maxRow, minCol, maxCol);
                
                if (graph[minRow][minCol] == '1' && graph[minRow][maxCol] == '1' && graph[maxRow][minCol] == '1' && graph[maxRow][maxCol] == '1'){
                    a++;
                } 
                else if (graph[maxRow][minCol] == '1' && graph[maxRow][maxCol] == '1' || graph[minRow][minCol] == '1' && graph[minRow][maxCol] == '1' || graph[minRow][minCol] == '1' && graph[maxRow][minCol] == '1' || graph[minRow][maxCol] == '1' && graph[maxRow][maxCol] == '1') {
                    b++;
                }
                else {
                    c++;
                }
            }
        }
    }
    cout << a << " " << c << " " << b;
    
    return 0;
}