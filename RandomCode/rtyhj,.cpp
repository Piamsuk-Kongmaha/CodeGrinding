#include <bits/stdc++.h>

using namespace std;

set<int> v;

void findfactor(int n)
{
    v.insert(1);
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n%i ==0)
        {
            v.insert(i);
            v.insert(n/i);
        }
    }
    v.insert(n);
}

int main()
{
    int n;
    cin >> n;
    findfactor(n);
    for(auto v2:v)
    {
        cout << v2 << " ";
    }
}
