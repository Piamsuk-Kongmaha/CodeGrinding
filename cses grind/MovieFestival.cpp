#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, total = 0, curr = 0;
    vector<pair<int, int>> v1;
    cin >> n;
    for(int i =0 ; i < n; i++)
    {
        int x,y;
        cin >> x >> y;
        v1.push_back({y,x});
    }
    sort(v1.begin(), v1.end());
    for(auto itr : v1)
    {
        if(itr.second >= curr)
        {
            curr = itr.first;
            total++;
        }
    }
    cout << total;
}