#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> v1;
    for(int i = 1 ;i <= n ;i++) v1.push(i);

    bool sk = false;

    while(!v1.empty())
    {
        int ele = v1.front();
        v1.pop();
        if(sk) cout << ele << ' '; 
        else v1.push(ele);
        sk = !sk;
    } 
    return 0;

    
}