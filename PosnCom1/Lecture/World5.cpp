#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 34;
    int k = 2*n+1;


    for(int i = 0; i <= n; i++)
    {
        int temp = 1;
        for(int j = 0; j < k; j++)
        {
            if(j <= i+n && j >= n-i)
            {
                cout << temp%10;
                temp++;
            }
            else cout << '.';
        }
        cout << '\n';
    }
    for(int i = n-1; i >= 0; i--)
    {
        int temp = 0;
        for(int j = 0; j < k; j++)
        {
            if(j <= i+n && j >= n-i)
            {
                cout << char((temp%26)+'A');
                temp++;
            }
            else cout << '.';
        }
        cout << '\n';
    }
}