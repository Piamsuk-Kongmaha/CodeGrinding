#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, maxn = INT32_MIN, sum = 0;
    cin >> n;
    long long int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++)
    {
        sum = max(arr[i] , sum + arr[i]);
        maxn = max(sum, maxn); 
    }
    cout << maxn;
}