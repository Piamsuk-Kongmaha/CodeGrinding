#include <bits/stdc++.h>

using namespace std;

int a[26] = {};

int main()
{
    while(true)
   {
        char c;
        cin >> c;
        if(c == '=')
        {
            char g;
            int n;
            cin >> g >> n;
            a[g-'A'] = n;
        }else if(c == '#')
        {
            char g;
            cin >> g;
            cout << a[g-'A'] << '\n';
        }else if (c == '+')
        {
            char g,f;
            cin >> g >> f;
            a[g-'A']+=a[f-'A'];
        }else if (c == '-')
        {
            char g,f;
            cin >> g >> f;
            a[g-'A']-=a[f-'A'];
        }
        else if (c == '*')
        {
            char g,f;
            cin >> g >> f;
            a[g-'A']*=a[f-'A'];
        }
        else if (c == '/')
        {
            char g,f;
            cin >> g >> f;
            a[g-'A']/=a[f-'A'];
        }else if(c== '!')
        {
            cout << "!";
            return 0;
        }
   }
}