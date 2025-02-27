#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int l,r,m;

    int arr[256]={};

    for(int i=0; i<n; i++){
        cin >> l >> m >> r;
        for(int j=l; j<r; j++){
            if(m>arr[j])arr[j] = m;
        }
    }

    for(int i=1; i<=255; i++){
        if(arr[i]!=arr[i-1]){
            cout << i << ' ' << arr[i] << ' ';
        }
    }

    return 0;
}

