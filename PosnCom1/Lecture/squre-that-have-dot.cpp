#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
 
char map[500][500];
 
void drawStar(int n, int x, int y) {
    if (n == 1) {
        map[x][y] = '*';
        return;
    }
 
    int len = 4 * (n - 1) + 1;

    for (int j = y; j < y + len; j++) {
        map[x][j] = '*';
        map[x + len - 1][j] = '*';
    }


    for (int i = x; i < x + len; i++) {
        map[i][y] = '*';
        map[i][y + len - 1] = '*';
    }
 

    drawStar(n - 1, x + 2, y + 2);
    return;
}
 
int main(void) {
 
    int n;
    cin >> n;
 
    for (int i = 0; i < 4 * (n - 1) + 1; i++) {
        for (int j = 0; j < 4 * (n - 1) + 1; j++) {
            map[i][j] = ' ';
        }
    }
 
    drawStar(n, 0, 0);

    for (int i = 0; i < 4 * (n - 1) + 1; i++) {
        for (int j = 0; j < 4 * (n - 1) + 1; j++) {
            cout << map[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}