#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0),cin.tie(NULL);
    int n; cin >> n;
    int q;
    while(n--) {
        cin >> q;
        long total=1;
        for (int i=1;i<=q;i++) {
            total*=2;
        }
        cout << fixed << setprecision(0) << total << '\n';
    }
    return 0;
}
