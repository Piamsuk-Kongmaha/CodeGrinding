#include<bits/stdc++.h>

using namespace std;
int n,m;
bool a[51][51];
unsigned long long int b[51][51];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    
        
    int temp;
    cin >> temp;
    for(int i = 0;i < temp; i++)
    {
        int dogx, dogy;
        cin >> dogx >> dogy;
        a[dogx][dogy] = true;
    }

    b[1][1] = 1;

    for(int i =1; i <= n; i++)
    {
        for(int j = 1;j <=m; j++)
        {
            if(a[i][j]) continue;
            b[i][j] += b[i-1][j] + b[i][j-1];
           }
    }

    cout << b[n][m];
    }