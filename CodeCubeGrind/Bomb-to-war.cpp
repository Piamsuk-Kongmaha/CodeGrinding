#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int n,m,cnt=0;cin>>n>>m;
    for(int i=2;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0) {isPrime=false;break;}
        }
        if(isPrime) cnt++;
    }
    if(cnt-m<=0) cout<<"0";
    else cout<<cnt-m;
}