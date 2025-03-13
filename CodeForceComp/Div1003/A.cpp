#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v1;
    for(int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        v1.push_back(temp);
    }
    for(auto i : v1)
    {
        i.erase(i.end()-2, i.end());
        i+='i';
        cout << i << '\n';     
    }
    
}