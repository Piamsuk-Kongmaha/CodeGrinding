#include <bits/stdc++.h>

using namespace std;

long long int n, cnt =1;

int main()
{

    cin >> n;

    if(n%2 == 0)
    {
        for(int i = n;i > n/2; i--) cnt*=i;
        for(int i = n/2; i > 0; i--)cnt/=i;
    }else
    {
        for(int i = n+1;i > n/2+1; i--) cnt*=i;
        for(int i = n/2+1; i > 0; i--)cnt/=i;
    }
    cout << cnt;
    return 0;
}