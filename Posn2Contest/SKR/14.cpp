#include <bits/stdc++.h>
using namespace std;
 
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int N, M, K;
    cin >> N >> M >> K;
    int minrem = N * M;
 
    for (int a = 1; a <= N; ++a) {
        for (int b = 1; b <= M; ++b) {
            if (a * b == K) {
                int r = N / a;
                int c = M / b;
                int total = r * c;
                int rem = N * M - total * K;
                if (rem < minrem) {
                    minrem = rem;
                }
            }
        }
    }
 
    cout << minrem << '\n';
    return 0;
}