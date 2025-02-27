#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r,c;
    cin >> r >> c;
    int a[r][c], b[c][r], cm[r][r];
    memset(cm,0,sizeof(cm));
    for(int i = 0; i <  r; i++)
    {
        for(int j = 0; j < c; j++)
        {
           cin >> a[i][j];
        }
    }for(int i = 0; i <  c; i++)
    {
        for(int j = 0; j < r; j++)
        {
           cin >> b[i][j];
        }
    }
    for(int i =0; i < r; i++)
    {
        for(int j = 0; j < r; j++)
        {
            for(int k = 0; k < c; k++)
            {
                cm[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i <  r; i++)
    {
        for(int j = 0; j < r; j++)
        {
           cout << cm[i][j] << " ";
        }
         cout << '\n';
    }
}