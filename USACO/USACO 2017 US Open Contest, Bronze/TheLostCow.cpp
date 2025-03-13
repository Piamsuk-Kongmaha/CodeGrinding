#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("lostcow.in", "r", stdin);
    int x, y;
    cin >> x >> y;

    int di = 1;
    int ans = 0;
    int by = 1;

    while (true)
    {
        if((di == 1 && x<=y && y<=x+by) || (di == -1 && x>=y && y>=x-by))
        {
            ans+=abs(x-y);
            break;
        }else
        {
            di*=-1;
            ans+=by*2;
            by*=2;
        }
    }
    freopen("lostcow.out", "w", stdout);
    cout << ans;
    
    
}