#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;

    vector<int> v1(n);
    for(int i =0; i < n; i++)
    {
        cin >> v1[i];
    }

    sort(v1.begin(),v1.end(),greater<int>());
    for(int i =0; i < n; i++)
    {
        if(v1[i] == v1[0])c++;
        else break;
    }
    cout << c;

}