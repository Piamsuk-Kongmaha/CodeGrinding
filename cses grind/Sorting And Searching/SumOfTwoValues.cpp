#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ,x;
    cin >> n >> x;
    bool c = false;
    vector<pair<int,int>> v1;
    for(int i = 1;i <= n; i++)
    {   
        int temp;
        cin >> temp;
        v1.push_back({temp, i});
    }
    sort(v1.begin(), v1.end());
    int l = 0, r = v1.size() - 1;
    while(l < r)
    {
        if(v1[l].first + v1[r].first < x) l++;
        else if(v1[l].first + v1[r].first > x) r--;
        else if( v1[l].first + v1[r].first == x)
        {
            c = true;
            break;
        }

    }
    if(c)
    {
        cout << v1[l].second << " " << v1[r].second;
    }else 
    {
        cout << "IMPOSSIBLE";
    }
}