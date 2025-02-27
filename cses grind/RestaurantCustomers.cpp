#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int , int>> v1;

    for(int i =0 ; i < n; i++)
    {
        int start , finish;
        cin >> start >> finish;
        v1.push_back({start, 1});
        v1.push_back({finish, -1});
    }

    sort(v1.begin() , v1.end());
    int a = 0,b = 0;
    for(auto i : v1)
    {
        a+= i.second;
        b = max(a,b);
    }
    cout << b;
}