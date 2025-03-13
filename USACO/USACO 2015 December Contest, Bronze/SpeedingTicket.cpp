#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("speeding.in", "r", stdin);
    int n, m, maxh = 0;

    cin >> n >> m;

    vector<int> roadsec(101,0);
    vector<int> oursec(101,0);
    int curr = 0;
    for(int i = 0; i < n; i++)
    {
        int range, amt;
        cin >> range >> amt;
        for(int j = 0; j < range ; j++)
        {
            roadsec[j + curr] = amt;
        }
        curr += range;
    }
    curr = 0;
    for(int i = 0; i < m; i++)
    {
        int range, amt;
        cin >> range >> amt;
        for(int j = 0; j < range ; j++)
        {
            oursec[j + curr] = amt;
        }
        curr += range;
    }

    for(int i = 0 ; i < 100; i++)
    {
        maxh = max(maxh, oursec[i] - roadsec[i]);
    }

    freopen("speeding.out", "w", stdout);

    cout << maxh;

}