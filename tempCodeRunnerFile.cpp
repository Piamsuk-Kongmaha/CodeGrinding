#include <bits/stdc++.h>

using namespace std;

int memo[1000];

int main()
{
    int n;
    cin >> n;
    memo[0] = 1;
    for(int i =2; i <= n; i++)
    {
        memo[i] = memo[i-1] * i;
    }

    cout << memo[n-1];
}