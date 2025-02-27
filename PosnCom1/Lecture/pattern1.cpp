#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10;
    

    for(int i = 0; i <= n; i++)
    {
        for(int j = 0;j <= n;j++)
        {
            if(j<=n-i-1) cout << j << " ";
            else cout << " ";
        }
        cout << '\n';
    }
    cout << "-----------------------";
    cout << '\n';

     for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(j >= n-i-1) cout << j << " ";
            else cout << "  ";
        }
        cout << '\n';
    }
    cout << "----------------------";
    cout << '\n';
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i <= j) cout << j << " ";
            else cout << "  ";
        }
        cout << '\n';
    }
    cout << "----------------------";
    cout << '\n';
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n;j++)
        {
            if(i >= j) cout << j << " ";
            else cout << "  ";
        }
        cout << '\n';
    }
}