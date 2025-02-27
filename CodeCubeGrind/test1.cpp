#include <bits/stdc++.h>

using namespace std;
const int S = 1e6;
int n,sum=0,mx;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cnt[S] = {0};
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        cnt[a]+=1;
        cnt[b]-=1;
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