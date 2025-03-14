#include<bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;
int main()
{
    
    long long ans = 1;
    int n;
    cin >> n;
    n = 2*n -1;
    vector<long long int> a(500001, -1);

    while(n--)
    {
        int temp;
        cin >> temp;
        a[temp]++;
        if(a[temp] > 1)
        {
            ans*= a[temp];
        }
        ans = ans % MOD;
    }
    cout << ans;
}