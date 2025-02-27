#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<string> q;
    cin >> s;
    sort(s.begin(),s.end());
    int c = 0;
    do{
        c++;
        q.push_back(s);

    }while(next_permutation(s.begin(),s.end()));


    cout << c << '\n';
    for(string i : q)
    {
        cout << i << '\n';
    } 
}