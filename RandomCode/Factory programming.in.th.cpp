#include <bits/stdc++.h>

using namespace std;


int main(){

    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);

    int n;

    cin >> n;

    int arr[n],arr2[n];


    for(int i=0; i<n; i++){

        cin >> arr[i];

    }

    for(int i=0; i<n; i++){

        cin >> arr2[i];

    }

    sort(arr, arr+n);

    sort(arr2, arr2+n);

    int ans=0;

    for(int i=0; i<n; i++){

        ans += abs(arr[i]-arr2[i]);

    }

    cout << ans;

    return 0;

}
