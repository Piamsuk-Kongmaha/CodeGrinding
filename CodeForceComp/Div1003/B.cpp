#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        int size = s.size();
        int hp = 0;
        for(int i = 0; i < size - 1; i++)
        {
            if(s[i] == s[i+1])
            {
                hp = 1;
                break;
            }
        }

        if(size > 1 && hp)
            cout << 1 << '\n';
        else   
            cout << size << '\n';
    }
}