#include <bits/stdc++.h>
#define ll long long int
#define ios ios_base::sync_with_stdio(0),cin.tie(0);
using namespace std;
const int N=5e4+2;
bool t[N][100];
int main(){
    ios;
    int n,mx=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        int p,q,r;
        cin>>p>>q>>r;
        mx=max(mx,p);
        for(int j=q;j<q+r;j++){
            t[p][j]=true;
        }
    }
    for(int i=1;i<=mx;i++){
        for(int j=1;j<=70;j++){
            if(t[i][j]==true){
                cout<<'x';
            }else{
                cout<<'o';
            }
        }cout<<"\n";
    }
    return 0;
}

