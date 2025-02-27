#include <bits/stdc++.h>
using namespace std;

vector<int> freqSub(const vector<int>& A, const vector<int>& B) {
    vector<int> ret(26, 0);
    for (int i = 0; i < 26; i++) {
        ret[i] = A[i] - B[i];
    }
    return ret;
}

vector<int> freqAdd(const vector<int>& A, const vector<int>& B) {
    vector<int> ret(26, 0);
    for (int i = 0; i < 26; i++) {
        ret[i] = A[i] + B[i];
    }
    return ret;
}

bool chFreq(const vector<int>& avail, const vector<int>& forced) {
    for (int c = 0; c < 26; c++) {
        if (avail[c] < forced[c]) return false;
        if ((avail[c] - forced[c]) % 2 != 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        string s; 
        cin >> s;
        int n = s.size();
        int half = n / 2;

        bool ch = true;
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - 1 - i]) { ch = false; break; }
        }
        if (ch) {
            cout << 0 << "\n";
            continue;
        }

        vector<char> A(half);for (int i = 0; i < half; i++)  A[i] = s[i];
        vector<char> B(half); for (int i = 0; i < half; i++) B[i] = s[n - 1 - i];
        vector<vector<int>> P_first(half + 1, vector<int>(26, 0));
        vector<vector<int>> Q_first(half + 1, vector<int>(26, 0));
        for (int i = 0; i < half; i++) {
            P_first[i + 1] = P_first[i];
            Q_first[i + 1] = Q_first[i];
            P_first[i + 1][A[i] - 'a']++;
            Q_first[i + 1][B[i] - 'a']++;
        }
        vector<int> mis1(half, 0); for (int i = 0; i < half; i++) mis1[i] = (A[i] != B[i]);
        vector<int> MFP(half + 1, 0); for (int i = 0; i < half; i++) MFP[i + 1] = MFP[i] + mis1[i];
        vector<char> C(half); for (int i = 0; i < half; i++) C[i] = s[half + i];
        vector<char> D(half);
        for (int i = 0; i < half; i++) {
            D[i] = s[half - 1 - i];
        }

        vector<vector<int>> P_second(half + 1, vector<int>(26, 0));
        vector<vector<int>> D_prefix(half + 1, vector<int>(26, 0));
        for (int i = 0; i < half; i++) {
            P_second[i + 1] = P_second[i];
            D_prefix[i + 1] = D_prefix[i];
            P_second[i + 1][C[i] - 'a']++;
            D_prefix[i + 1][D[i] - 'a']++;
        }

        vector<int> mis2(half, 0);
        for (int i = 0; i < half; i++) {
            mis2[i] = (C[i] != D[i]);
        }
        vector<int> MSP(half + 1, 0);
        for (int i = 0; i < half; i++) {
            MSP[i + 1] = MSP[i] + mis2[i];
        }

        auto val1 = [&](int L, int R) -> bool {
            if (L > 0 && MFP[L] != 0) return false;
            if (R < half - 1 && (MFP[half] - MFP[R + 1]) != 0) return false;
            vector<int> freqA = freqSub(P_first[R + 1], P_first[L]);
            vector<int> freqB = freqSub(Q_first[R + 1], Q_first[L]);
            if (!chFreq(freqA, freqB))
                return false;
            return true;
        };

        auto val2 = [&](int L, int R) -> bool {
            int Lp = L - half, Rp = R - half;
            if (Lp > 0 && MSP[Lp] != 0) return false;
            if (Rp < half - 1 && (MSP[half] - MSP[Rp + 1]) != 0) return false;
            vector<int> freqC = freqSub(P_second[Rp + 1], P_second[Lp]);
            vector<int> freqD = freqSub(D_prefix[Rp + 1], D_prefix[Lp]);
            if (!chFreq(freqC, freqD))
                return false;
            return true;
        };

        auto valSpan = [&](int L, int R) -> bool {
            int X = (n - 1) - R;
            int mini = min(L, X);

            if (mini > 0) {
                if (MFP[mini] != 0) return false;
            }

            vector<int> forced(26, 0);
            if (L <= X) {
                if (X - L > 0) {
                    forced = freqSub(Q_first[X], Q_first[L]);
                }
            } else {
                if (L - X > 0) {
                    forced = freqSub(P_first[L], P_first[X]);
                }
            }
            vector<int> freqFirstPart = freqSub(P_first[half], P_first[L]);
            int R2 = R - half;
            vector<int> freqSecondPart = freqSub(P_second[R2 + 1], P_second[0]);
            vector<int> total(26, 0);
            for (int c = 0; c < 26; c++) {
                total[c] = freqFirstPart[c] + freqSecondPart[c];
            }
            if (!chFreq(total, forced))
                return false;
            return true;
        };

        int lo = 1, hi = n;
        int ans = n;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            bool ch2 = false;

            for (int i = 0; i <= n - mid; i++) {
                int j = i + mid - 1;
                if (j < half) {
                    if (val1(i, j)) {
                        ch2 = true;
                        break;
                    }
                } else if (i >= half) {
                    if (val2(i, j)) {
                        ch2 = true;
                        break;
                    }
                } else {
                    if (valSpan(i, j)) {
                        ch2 = true;
                        break;
                    }
                }
            }
            if (ch2) {
                ans = mid;
                hi = mid - 1;
            } else lo = mid + 1;
        }

        cout << ans << "\n";
    }
    return 0;
}