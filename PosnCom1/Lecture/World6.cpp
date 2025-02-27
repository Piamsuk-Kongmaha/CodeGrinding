

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n;
    cin >> n;
    int k = 2*n;
    int h = 1;
    for(int i =0; i < n; i++)
   {
        int temp= i,temp2 = 0;
        for(int j = 1; j < k; j++)
        {
            if (j >= n-i && j <= i+n)
            {
                if(j <= n)
                {
                    cout << s[temp];
                    temp--;
                }else
                {
                    cout << s[temp2+1];
                    temp2++;
                }
            }
            else cout << ' ';
        }
       cout << '\n';
   }
   for(int i =n-2; i >= 0; i--)
   {    
        int temp= i,temp2 = 0;
        for(int j = 1; j < k; j++)
        {
            if (j >= n-i && j <= i+n)
            {
                if(j <= n)
                {
                    cout << s[temp];
                    temp--;
                }else
                {
                    cout << s[temp2+1];
                    temp2++;
                }
            }
            else cout << ' ';
        }
        cout << '\n';
   }
}