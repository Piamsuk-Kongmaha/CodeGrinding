#include <bits/stdc++.h>

using namespace std;
#define int long long

int32_t main()
{
    vector<pair<int,int>> v1;
    int n;
    cin >> n;

    int energy, data;
    for(int i = 0; i < n; i++)
    {
        cin >> data >> energy;
        v1.push_back({energy,data});    
    }
    sort(v1.begin(), v1.end());
    for(int i = 1; i < n; i++) v1[i].second += v1[i-1].second;

    int position = n-1;
    float current = (double)v1[position].second / (double)v1[position].first;

    for(int i = n - 2; i >= 0 ; i--){
        if((double)v1[i].second / (double)v1[i].first >= current)
        {
            current = (double)v1[i].second / (double)v1[i].first;
            position = i;
        }
    }

    cout << v1[position].second << " " << v1[position].first;

}