#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 2, l=4;
    for(int i = 0; i < n+1; i++)
    {
        for(int q = 0; q < l; q++)
        {
            for(int j = n; j>i; j--)
            {
                cout << '-';
            }
            for(int j = 0; j < n+1; j++)
            {
                if(j <= i) cout << '*';
            }
        }
        cout << '\n';
    }
}