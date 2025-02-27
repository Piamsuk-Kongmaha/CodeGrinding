#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1][2*n+1];
    memset(a,0,a.sizeof(a));
    a[0][n] =1;
    a[n][0] =1;
    a[n][n*2] = 1;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j<=n*2-1; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j+1];
        }
    }

    for(int i =0; i <=n; i++)
    {
        for(int j = 0; j <=n*2; j++)
        {
            if(a[i][j]>0)
                if(a[i][j] < 10) cout <<".." << a[i][j] <<".";
        }
    }
}