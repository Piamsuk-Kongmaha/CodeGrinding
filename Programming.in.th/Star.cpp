#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[n][n];
    if(n%2==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(i+j==n/2-1 || j-i==n/2-1 || i-j==n/2 || i+j==n/2+n-2) a[i][j]='*';
                else a[i][j]='-';
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j-i==n/2 || i+j==n/2 || i-j==n/2 || i+j==n+n/2-1) a[i][j]='*';
                else a[i][j]='-';
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
}

