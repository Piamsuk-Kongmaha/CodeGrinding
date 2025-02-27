
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a = 0;
    int b = 0;

    char c;
    while ((c = getc(stdin) - 48) != -38) {
        a = ((a * 10) + c) % 3;
        b = ((b * 10) + c) % 11;
    }

    cout << a << " " << b << "\n";

    return 0;
}
