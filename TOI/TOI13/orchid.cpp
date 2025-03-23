#include <bits/stdc++.h>

using namespace std;

vector<int> dp;

int main()
{
    int n;
    cin >> n;
    vector<int> orc(n);
    for(int i = 0; i < n; i++)
    {   
        cin >> orc[i];
    }
    dp.push_back(orc[0]);
    for(int i = 1; i < n; i++)
    {
        auto val = upper_bound(dp.begin(),dp.end(),orc[i]);
        if(val == dp.end()) dp.push_back(orc[i]);
        else *val = orc[i];
    }

    cout << n - dp.size();
}