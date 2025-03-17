#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    set<int> v1;
    for(int i =0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v1.insert(temp);
    }

    cout << *next(v1.begin(), 0) <<  *next(v1.begin(), 1);
}