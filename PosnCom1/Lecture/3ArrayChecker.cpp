#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,o;
    cin >> n >> m >> o;
    int a[n],b[m],c[o];
    for(int i  =0; i < n; i++) cin >> a[i];
    for(int i  =0; i < m; i++) cin >> b[i];
    for(int i  =0; i < o; i++) cin >> c[i];

    sort(a,a+n), sort(b,b+m), sort(c,c+o);

    int x = 0, y = 0, z= 0;
    set<int>s;
    while(x < n && y < m && z < o )
    {
        if(a[x] == b[y] && a[x] == c[z]){
            s.insert(a[x]);
            x++;
            y++;
            z++;
        }else {
            int Min = min(a[x], min(b[y], c[z]));
            if(a[x] == Min) x++;
            if(b[y] == Min) y++;
            if(c[z] == Min) z++;
        }
    }
    for(int e:s)
    {
        cout << e << " ";
    }


    
}