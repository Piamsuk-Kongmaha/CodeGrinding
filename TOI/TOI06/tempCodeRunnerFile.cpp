#include <bits/stdc++.h>

using namespace std;

vector<string> s;

void think(int a, int n)
{
    if(a >= n) 
    {
        for(int i =0; i < s.size(); i++) cout << s[i] << '\n';
        cout << 'E' << '\n';
    }else {
        
        s.push_back("--");
        think(a+1, n);
        s.pop_back();
        if(a+2 <= n)
        {
            s.push_back("||");
            think(a+2, n);
        }
    }
}


int main()
{
    int n;
    cin >> n;
    think(0,n);
}