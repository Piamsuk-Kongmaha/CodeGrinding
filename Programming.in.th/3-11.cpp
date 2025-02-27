#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int m3, m11;
    cin >> s;

    for(int i =0 ; i < s.size(); i++)
    {
        int num = s[i] - '0';
        if (i == 0)
        {
            m3 = num%3;
            m11 = num%11;
            continue;
        }
        m11 = (num+(m11*10)) % 11;
        m3 = (num+(m3*10)) % 3;
    }

    cout << m3 <<  " " << m11;
}