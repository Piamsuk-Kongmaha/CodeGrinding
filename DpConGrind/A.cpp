#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int cost = 0, i = n - 1;
    vector<long long int> num(n, 0);
    for(int i = 0;i < n; i++)
    {
        cin >> num[i];
    }
    while(i >= 1)
    {
        if(abs(num[i-1] - num[i]) > abs(num[i-2] - num[i]))
        {
            cost +=  abs(num[i-2] - num[i]);
            i -= 2;
        }else 
        {
            cost +=  abs(num[i-1] - num[i]);
            i -= 1;
        }
    }
    cout << cost;
}