#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0 ;
    cin >> n;
    vector<int> v1(n) ;
    for(int i = 0; i < n; i++ )
    {
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    for(int i = 0; i < n; i++)
    {
        if(v1[i] == 0) c++;
    }
    swap(v1[c],v1[0]);
    for(auto i : v1)
    {
        cout << i;
    }
}