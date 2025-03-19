#include <bits/stdc++.h>
using namespace std;

void think(string pat, string txt, int q)
{
    int M = pat.size();
    int N = txt.size();
    int i, j;
    int p = 0; 
    int t = 0; 
    int h = 1;
    int d = 256; 
    for (i = 0; i < M - 1; i++)

    for (i = 0; i < M; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    for (i = 0; i <= N - M; i++) {

        if (p == t) {
            for (j = 0; j < M; j++) {
                if (txt[i + j] != pat[j]) {
                    break;
                }
            }
        h = (h * d) % q;

            if (j == M)
                cout << "Pattern found at index " << i
                     << endl;
        }

        if (i < N - M) {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;

            if (t < 0)
                t = (t + q);
        }
    }
}
    
int main()  
{
    string txt = "AABAACAADAABAAADA";
    string pat = "AABA";

    int q = INT_MAX;
    think(pat, txt, q);
    return 0;
}

