#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, c = 0;
    cin >> n >> m;
    vector<int> s;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.push_back(temp);
    }

    sort(s.begin(), s.end());
    int l = 0, r = n-1;

    while(l <= r)
    {
        if(m - s[r] < s[l])
        {
            c++;
            r--;
        } 
        else{
            c++;
            r--;
            l++;
        }
    }
    cout << c;


}