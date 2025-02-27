#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 4,h = 3;
    //cin >> n;
    n++;
    int k = 2*n+1;
    for(int i =1 ; i < n+1; i++)
    {
        for(int j =0; j < k; j++)
        {
            if(n-i == j) cout << '/';
            else if (i+n-1 == j) cout << '\\';
            else cout << " ";
        }
        cout << '\n';
    }
}