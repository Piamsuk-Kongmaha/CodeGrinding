#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int m, a=1;
    for(int i =0; i < n; i++)
    {
        cin >> m;
        a=a/__gcd(a,m)*m;
    }
    cout << a;
    return 0;
}