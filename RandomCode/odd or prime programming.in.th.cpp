#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        if ((s.size() == 1 && s == "2") || (s.back() - '0') & 1) {
            cout << "T";
        }
        else {
            cout << "F";
        }

        cout << "\n";
    }
}
