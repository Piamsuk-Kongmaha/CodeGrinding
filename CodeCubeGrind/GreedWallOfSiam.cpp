    #include <bits/stdc++.h>

    using namespace std;
    const int N = 1e5+1;
    int main()
    {
        long long int sum = 0;
        int n, a[N], gcd; cin >> n >> a[0];
        gcd = a[0];
        for(int i = 1; i < n; i++){ cin >> a[i];gcd = __gcd(a[i],gcd);}
        for(int i =0 ; i < n; i++) sum+=(a[i]/gcd);
        cout << sum;
    }