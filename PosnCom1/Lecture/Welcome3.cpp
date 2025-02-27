#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "WORLD";
    int n = s.length();
    int k = n*2-1;
    for(int i = 0; i < n; i++)
    {
        for(int q = 0 ; q < n; q++)
        {
            for(int j = 0; j < k; j++)
            {
                if(j==i || j == k-i-1 || j == i+1 || j == k-i-2)cout << s[q];
                else cout << ' ';
            }
            cout << ' ';
        }
        
        cout << '\n';
    }
}