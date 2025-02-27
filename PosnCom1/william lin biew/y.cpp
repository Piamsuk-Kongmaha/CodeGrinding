/*
TASK: pairsum
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    vector<int> v1;
    for(int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v1.push_back(tmp);
    }
    sort(v1.begin(),v1.end());
    for(int i = 0; i < m; i++)
    {
        bool n = false;
        int temp;
        cin >> temp;
        int l = 0, r = v1.size() - 1;
        while(l < r)
        {
            if(v1[l]+v1[r] == temp)
            {
                n = true;
                break;
            } 
            else if(v1[l] + v1[r] < temp)
            {
                l++;
            }else r--;
            
        }  
        if(n) cout << "YES\n";
        else cout << "NO\n";
    }
}
