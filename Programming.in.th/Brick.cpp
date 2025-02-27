#include <iostream>

using namespace std;

int main()
{
    int n,m,c;
    cin >> n >> m;
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    char brick[n][m] = {};
    int k[m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m;j++)
        {
            cin >> brick[i][j];
        }
    }
    for(int i  =0; i < m; i++)
    {
        cin >> k[i];
    }

    /*for(int i =0 ; i < m; i++)
    {
        for(int j = 0; j< input[i]; j++)
        {
            for(int k = 0; k < n; k++)
            {
                if(brick[k][i] == 'O' || brick[k][i] == '#')
                {
                    brick[k-1][i] = '#';
                    break;
                }
                if(k == n-1)
                    brick[k][i] = '#';
            }
        }
    }*/

   for(int i = m-1; i >=0 ; i--)
   {
        int  f= 0;
        for(int j= 0; j < n; j++)
        {
            int cnt2 =j;
            if(brick[j][i] == 'O')
            {
                f=1;
                while (k[i] > 0)
                {
                    if(cnt2-1 < 0){
                        j =n ;
                        break;
                    }
                    brick[cnt2-1][i] = '#';
                    if(k[i] > 0)
                    {
                        k[i]--;
                        cnt2--;
                    }
                }
                
            }
        }
        if(f==0 && k[i] > 0)
        {
            int z = n-1;
            while (k[i]  >0)
            {
                brick[z][i] = '#';
                if(k[i] > 0){
                    k[i]--;
                    z--;
                }
            }
        }
   }

    for(int i =0; i < n; i++)
    {
        for(int j = 0; j< m; j++)
        {
            cout << brick[i][j];
        }
        cout << '\n';
    }
    return 0;
}
/*
8 5
.....
.....
.OO..
.....
.O...
...O.
.....
.....
1 1 3 2 0
*/