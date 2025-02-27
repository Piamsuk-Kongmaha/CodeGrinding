#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,k,a,q,x;
    bool mag[100001];

    cin >> n >> m >> q;

    while (m--)
    {
        cin >> a >> k;
        mag[a] = !mag[a];
        mag[a+k] = !mag[a+k];
    }
    while(q--)
    {
        cin >> x;
        int y = x, z= x+1;
        while(y>1 && mag[y] == 0) y--;
        while(z<=n && mag[z] == 0)z++;
        cout << z-y << '\n';
    }
}