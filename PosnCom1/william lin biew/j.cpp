/*
TASK: diamond
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
    int h = 0;
    for(int i =0; i < n; i++)
   {
        int temp= 0,temp2 = h;
        for(int j = 1; j < k; j++)
        {
            if (j >= n-i && j <= i+n)
            {
                if(j <= n)
                {
                    cout << s[temp];
                    temp++;
                }else
                {
                    cout << s[temp2-1];
                    temp2--;
                }
            }
            else cout << ' ';
        }
        h++;
       cout << '\n';
   }
   h = n-2;
   for(int i =n-2; i >= 0; i--)
   {    
        int temp= 0,temp2 = h;
        for(int j = 1; j < k; j++)
        {
            if (j >= n-i && j <= i+n)
            {
                if(j <= n)
                {
                    cout << s[temp];
                    temp++;
                }else
                {
                    cout << s[temp2-1];
                    temp2--;
                }
            }
            else cout << ' ';
        }
        h--;
        cout << '\n';
   }
}