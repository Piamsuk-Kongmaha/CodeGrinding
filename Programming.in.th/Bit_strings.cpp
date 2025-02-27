#include <bits/stdc++.h>
#define MOD 1000000007;
using namespace std;

int main()
{
    int n,answer = 1;
    cin >> n;
    for(int i =0 ; i < n; i++)
    {
        answer*=2;
        answer%=MOD;

    }
    cout << answer;
    
}