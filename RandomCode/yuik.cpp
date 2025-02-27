#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n+2][m+2],qs1[n+2][m+2],qs2[n+2][m+2];
    memset(qs1,0,sizeof(qs1));
    memset(qs2,0,sizeof(qs2));
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
            qs1[i][j]+=arr[i][j]+qs1[i-1][j]+qs1[i][j-1]-qs1[i-1][j-1];
            qs2[i][j]+=qs1[i][j]-qs1[i-1][j]+qs2[i-1][j-1];
        }
    }
    int mx=INT_MIN;
    for(int i=k;i<=n;i++){
        for(int j=k;j<=m;j++){
            mx=max(mx,qs2[i][j]-qs1[i][j-k]-qs2[i-k][j-k]+qs1[i-k][j-k]);
        }}
        memset(qs1,0,sizeof(qs1));
    memset(qs2,0,sizeof(qs2));
    for(int i=1;i<=n;i++){
        for(int j=m;j>=1;j--){
            qs1[i][j]+=arr[i][j]+qs1[i-1][j]+qs1[i][j+1]-qs1[i-1][j+1];
            qs2[i][j]+=qs1[i][j]-qs1[i-1][j]+qs2[i-1][j+1];
        }
    }
    for(int i=k;i<=n;i++){
        for(int j=m-k+1;j>=1;j--){
            mx=max(mx,qs2[i][j]-qs1[i][j+k]-qs2[i-k][j+k]+qs1[i-k][j+k]);
        }
    }
    cout<<mx;
}
