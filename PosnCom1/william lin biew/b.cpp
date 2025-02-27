#include <bits/stdc++.h>

using namespace std;

int main()
{
   
   int a1,b1,c1;
   cin >> a1 >> b1 >> c1;
   int tmp;
   vector<int> a(a1);
   vector<int> b(b1);
   vector<int> c(c1);

    for(int i = 0; i < a1 ; i++) cin >> a[i];
    for(int i = 0; i < b1 ; i++) cin >> b[i];
    for(int i = 0; i < c1 ; i++) cin >> c[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());

    int i1 = 0,i2 = 0,i3 = 0;
    set<int> v;

    while (i1 < a.size() && i2 < b.size() && i3 < c.size())
    {
        if(a[i1] == b[i2] && a[i1]==c[i3])
        {
            v.insert(a[i1]);
            i1++;
            i2++;
            i3++;
        }else if(a[i1] > b[i2] && a[i1] > c[i3])
        {
            i2++;
            i3++;
        }else if(a[i1] < b[i2] && b[i2] > c[i3])
        {
            i1++;
            i3++;
        }else{
            i1++;
            i2++;
        }
    }
    for(auto i:v)
    {
        cout << i << " " ;
    }

}