#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m;
    cin >> n >> m;
    int a = __gcd(n,m);
    for(int i =1; i <= a; i++)
    {
        if(a%i == 0)
        {
            cout << i << " " << n/i << " " << m/i << '\n';
        }
    }
}