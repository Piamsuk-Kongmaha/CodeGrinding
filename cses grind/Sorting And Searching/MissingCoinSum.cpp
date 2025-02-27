#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[n], res = 1;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);
    for(int i = 0; i < n && arr[i] <= res; i++)
    {
        res += arr[i];
    }
    cout << res;
}