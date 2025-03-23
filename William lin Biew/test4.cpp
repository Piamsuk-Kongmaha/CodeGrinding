#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int num;
    cin >> num;
    vector<int> res;
    res.push_back(1);
    int carry = 0;
    for(int i = 2; i <= num; i++)
    {
        for(int j = 0; j < res.size(); j++)
        {
            int temp = res[j] * i;
            res[j] = (temp+carry) % 10;
            carry  = (temp+carry) / 10;
        }
        while (carry != 0)
        {
            res.push_back(carry%10);
            carry = carry / 10;
        }
        
    }
    
    for(int i = res.size() - 1; i >=0; i--)
    {
        if(i%3==2 && i!= res.size() -1)
        {
            cout << ',';
        } 
        cout << res[i];
    }
    
    cout << '\n';
}