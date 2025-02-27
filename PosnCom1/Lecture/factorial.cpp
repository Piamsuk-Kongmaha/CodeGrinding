#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p;
    p.push_back(1);

    for(int i = 1; i <= n; i++)
    {
        p[i] = i * p[i-1]; 
    }
    cout << p[n];
}