#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,c,k,l;
    cin >> n >> m >> c >> k >> l;
    int sum = l*c*k;
    for(int i  = 0; i < n*m; i++)
    {
        int tmp; cin>>tmp;
        sum+=tmp;
    }
    if(sum%l)cout << sum/l+1;
    else cout << sum/l;
    return 0;
}

/*
3 3
2 1
1
1 1 1
1 1 1
1 1 1
*/