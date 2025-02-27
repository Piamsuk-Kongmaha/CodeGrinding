#include <bits/stdc++.h>

using namespace std;
char s[300][300];

void making(int a, int b, int p, int m,char y, char u)
{
    int k = 2*a+1;
    for(int q = 0; q < b; q++)
    {
        for(int i = a; i >= 0; i--)
        {
            for(int j = 0; j < k; j++)
            {
                if(i == a && j == 0) s[i][j+p] = q+'1';
                else if(j+i >= a && j-i <= a)
                    if(q%2)s[i][j+p] = u;
                    else s[i][j+p] = y;
            } 
        }
        p+=m;
    }
}

int main()
{
    int a,b;
    cin >> a >> b;
    char y,u;
    cin >> y >> u;
    int p = 0;
    int m = a*2+1;
    
    for(int q= 0; q <= b+1; q++)
    {
        fill_n(s[0],300*300,' ');
        making(a,b,p,m,y,u);
        for(int i = 0; i <= a; i++)
         {
             for(int j = 0; j < (2*a+1)*b+2; j++)
             {
                 cout << s[i][j];
             }
        cout << '\n';
        }
        m--;

    }
}
