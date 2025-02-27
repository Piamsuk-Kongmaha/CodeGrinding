#include <bits/stdc++.h>
using namespace std;

bool feasibleUp(int cur, int ru, int rd, int U, int F) {
    if(ru <= 0) return false;
    int ncur = cur + 1;
    if(ncur > U) return false;
    int maxFinal = ncur + (ru - 1);
    int minFinal = ncur - rd;
    return (minFinal <= F && F <= maxFinal);
}

bool feasibleDown(int cur, int ru, int rd, int L, int F) {
    if(rd <= 0) return false;
    int ncur = cur - 1;
    if(ncur < L) return false;
    int maxFinal = ncur + ru;
    int minFinal = ncur - (rd - 1);
    return (minFinal <= F && F <= maxFinal);
}

string constructNonNegative(int F, int k, int n, int m) {
    if(n < k || F > k) return "";
    int total = n + m;
    string res; res.resize(total);
    int pos = 0;
    for (int i = 0; i < k; i++) {
        res[pos++] = '0';
    }
    int cur = k;   
    int ru = n - k;  
    int rd = m;  
    int L = 0, U = k;
    while(ru + rd > 0) {
        if(cur == U) { 
            if(!feasibleDown(cur, ru, rd, L, F)) return "";
            res[pos++] = '1';
            cur--;
            rd--;
        } else if(cur == L) { 
            if(!feasibleUp(cur, ru, rd, U, F)) return "";
            res[pos++] = '0';
            cur++;
            ru--;
        } else {
            bool upOk = feasibleUp(cur, ru, rd, U, F);
            bool downOk = feasibleDown(cur, ru, rd, L, F);
            if(upOk && downOk) {
                if(abs((cur + 1) - F) <= abs((cur - 1) - F)) {
                    res[pos++] = '0';
                    cur++;
                    ru--;
                } else {
                    res[pos++] = '1';
                    cur--;
                    rd--;
                }
            } else if(upOk) {
                res[pos++] = '0';
                cur++;
                ru--;
            } else if(downOk) {
                res[pos++] = '1';
                cur--;
                rd--;
            } else {
                return "";
            }
        }
    }
    if(cur != F) return "";
    return res;
}

string constructNegative(int F, int k, int n, int m) {
    if(m < k || -F > k) return "";
    int total = n + m;
    string res; res.resize(total);
    int pos = 0;

    for (int i = 0; i < k; i++) {
        res[pos++] = '1';
    }
    int cur = -k;   
    int ru = n;   
    int rd = m - k;    
    int L = -k, U = 0;    
    while(ru + rd > 0) {
        if(cur == U) {
            if(!feasibleDown(cur, ru, rd, L, F)) return "";
            res[pos++] = '1';
            cur--;
            rd--;
        } else if(cur == L) {
            if(!feasibleUp(cur, ru, rd, U, F)) return "";
            res[pos++] = '0';
            cur++;
            ru--;
        } else {
            bool upOk = feasibleUp(cur, ru, rd, U, F);
            bool downOk = feasibleDown(cur, ru, rd, L, F);
            if(upOk && downOk) {
                if(abs((cur + 1) - F) <= abs((cur - 1) - F)) {
                    res[pos++] = '0';
                    cur++;
                    ru--;
                } else {
                    res[pos++] = '1';
                    cur--;
                    rd--;
                }
            } else if(upOk) {
                res[pos++] = '0';
                cur++;
                ru--;
            } else if(downOk) {
                res[pos++] = '1';
                cur--;
                rd--;
            } else {
                return "";
            }
        }
    }
    if(cur != F) return "";
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int total = n + m;

        if(n == 0) {
            if(k == m) cout << string(m, '1') << "\n";
            else cout << -1 << "\n";
            continue;
        }
        if(m == 0) {
            if(k == n) cout << string(n, '0') << "\n";
            else cout << -1 << "\n";
            continue;
        }

        int F = n - m;
        if(abs(F) > k) {
            cout << -1 << "\n";
            continue;
        }

        string ans;
        if(F >= 0) {
            if(n < k) {
                cout << -1 << "\n";
                continue;
            }
            ans = constructNonNegative(F, k, n, m);
        } else {
            if(m < k) {
                cout << -1 << "\n";
                continue;
            }
            ans = constructNegative(F, k, n, m);
        }

        if(ans == "" || (int)ans.size() != total) cout << -1 << "\n";
        else cout << ans << "\n";
    }
    return 0;
}