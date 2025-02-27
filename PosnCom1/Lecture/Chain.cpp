#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5, c = 4,a;
    int k = 2*n+1;
    char outter[2] = {'*','o'};
    char inner[2] = {'+','-'};

    for(int i = 0; i < k; i++)
    {
        for(int q = 0; q < c; q++)
        {
            if(q == 0) a = 0;
            else a = 2;
            for(int j = a; j < k; j++)
            {
                if(q%2 == 0 && i == n && j == k-1)cout << inner[1];
                else if(q!=c-1&&((j==k-1&&i==n-1)||(j==k-1 && i==n+1) || (j==k-2 && i==n && q%2 ==0)))cout << outter[(q+1)%2];
                else if(j+i == n || j-i ==n  || i-j == n || i+j == 3*n) cout << outter[q%2];
                else if(j+i < n || j-i > n  || i-j > n || i+j > 3*n) cout << ' ';
                else cout << inner[q%2];
            }
        }
        cout << '\n';
    }
}