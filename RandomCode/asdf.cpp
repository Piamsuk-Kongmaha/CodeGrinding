#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(NULL);
    int n,ma=1;
    cin>>n;
    int a[n]={},b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    a[0]=1;
    for(int i=1;i<n;i++){
        a[i]=1;
        for(int j=i-1;j>=0;j--){
            if(b[i]>=b[j]){
                a[i]=max(a[i],a[j]+1);
                ma=max(ma,a[i]);
            }
        }
    }
    /*for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/
    //cout<<"\n";
    cout<<"-----------------------------" << endl <<ma;
    return 0;
}
