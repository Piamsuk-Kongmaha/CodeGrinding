#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m; 
    cin >> n >> m;
    int h[n]; for(int i =0; i < n; i++) cin >> h[i];

    int dl[n], dr[n];

    vector<int> l ,r;
    for(int i = 0; i < n; i++)
    {
        int idx = lower_bound(l.begin(),l.end(),h[i]) - l.begin();
        if (idx == l.size()) l.push_back(h[i]);
        else l[idx] = h[i];
        dl[i] = idx;
    }
    for(int i = n-1; i >= 0; i--)
    {
        int idx = lower_bound(r.begin(),r.end(),h[i]) - r.begin();
        if (idx == r.size()) r.push_back(h[i]);
        else r[idx] = h[i];
        dr[i] = idx;
    }

    while(m--)
    {
        int x; cin >> x;
        cout << min(dl[x], dr[x]) << '\n';
    }
}