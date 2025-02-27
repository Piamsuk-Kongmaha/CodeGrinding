/*
TASK: anagram
LANG: C++
AUTHOR: Piamsuk Kongmah
CENTER: SUT
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    string y;
    getline(cin,y);
    string u;
    getline(cin,u);
    cout << q;
    string m = "";
    string n = "";

    for(char c:y)
    {
        if(isalpha(c))
        {
            c = toupper(c);
            m+=c;
        }
    }
    for(char c:u)
    {
        if(isalpha(c))
        {
            c = toupper(c);
            n+=c;
        }
    }
    int size12 = max(n.size(),m.size());
    
    sort(m.begin(),m.end());
    sort(n.begin(),n.end());

    int c = 0;
    for(int i = 0; i < size12; i++)
    {
        if(n[i] != m[i]) c++;
        
    }
    if(c > q) cout << "no";
    else cout << "yes";
}