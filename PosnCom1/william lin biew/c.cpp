/*
TASK: triangle
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> s;
    vector<bool> check(26,false);
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        char temp;
        cin >> temp;
        if(check[int(temp)-'A'] == false)
        {
            s.push_back(temp);
            check[int(temp - 'A')] = true;
        }
    }
    sort(s.begin(),s.end());
    int n = s.size();
    int k = 2*n;
   for(int i =0; i < n; i++)
   {
        for(int j = 1; j <= n; j++) cout << " ";
        for(int j = 1; j < k; j++)
        {
            if (j >= n-i && j <= i+n) cout << s[i];
            else cout << ' ';
        }
        cout << '\n';
   }
   for(int i =0; i < n; i++)
   {
        for(int j = 1; j < k; j++)
        {
            if (j >= n-i && j <= i+n) cout << s[i];
            else cout << ' ';
        }
        cout <<  " ";
        for(int j = 1; j < k; j++)
        {
            if (j >= n-i && j <= i+n) cout << s[i];
            else cout << ' ';
        }
         cout << '\n';
   }
}