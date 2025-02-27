#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string temp = "";
    int n = 10;
    getline(cin, s);
    int len = s.length();
    for(int i =0; i < len; i++)
    {
        if ((int)s[i] >= 65 || (int)s[i] == 32)
        {
            temp+=s[i];
        }
    }
    int j = 0;
    while(temp[j]==' ')j++;
    temp.erase(temp.begin() , temp.begin()+j);
    for(j = 0; j < temp.size(); j++)
    {
        if(temp[j] == ' ' && temp[j-1] == ' ')
        temp.erase(temp.begin()+j, temp.begin());
    }
    cout << temp;
}