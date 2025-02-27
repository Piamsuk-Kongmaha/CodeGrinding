#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 4;
    //cin >> n;
    int k = 2*n-1;

    for(int i = 0; i < k; i++)
    {
        for(int j =0; j< n; j++)
        {
            if(j < n/2+i-1 && j < n/2 + n -i+1 )
            {
                cout << "* ";
            }else cout << ". ";
        }
        cout << '\n';
    }

    cout << '\n' << '\n';

    for(int i = 0; i < k; i++)
    {
        for(int j =0; j< n; j++)
        {
            if(j > n/2-i  && j >= i - n/2-1)
            {
                cout << "* ";
            }else cout << ". ";
        }
        cout << '\n';
    }

    cout << '\n' << '\n';

    for(int i = 0; i < k; i++)
    {
        for(int j =0; j< 2*n; j++)
        {
            if(j > n/2-i  && j >= i - n/2-1 && j < n/2+i-1 && j < n/2 + n -i+1)
            {
                cout << "* ";
            }else cout << ". ";
        }
        cout << '\n';
    }
}