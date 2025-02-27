#include <bits/stdc++.h>

using namespace std;

bool check(string s)
{
    string p = s;
    reverse(p.begin(), p.end());
    if(s==p) return true;
    else return false;
}

void dou(string s)
{
    
}

int main()
{
    string s;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    if(check(s)) cout << "yes";
    else cout << "no";
    return 0;
}