#include <bits/stdc++.h>

using namespace std;
const int S = 1e5+9;
int main()
{
    
    int cnt[S] = {0};
    int n,sum=0,mx;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        cnt[a]++;
        cnt[b]--;
    }

    for(int i = 0; i < S; i++)
    {
        sum+=cnt[i];
        mx = max(sum,mx);
    }
    cout << mx;
}

/*
5
1 4
3 9
2 8
6 10
5 10
*/