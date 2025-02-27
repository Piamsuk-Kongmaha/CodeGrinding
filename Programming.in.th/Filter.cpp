#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w,h,n,a,x,half =0, tem = 0;
    cin >> w >> h >> n;
    int count[w] = {};
    for(int i = 1; i <=n; i++)
    {
        cin >> x >> a;
        for(int j = x;j<min(a+x,w); j++)
        {
            count[j]++;
        }
    }
    
    for(int i =0; i < w; i++)
    {
        if(count[i] == 1)
        {
            half+=h;
        }
        if(count[i] == 0)
        {
            tem+=h;        }
    }

    cout << tem << " " << half;
}