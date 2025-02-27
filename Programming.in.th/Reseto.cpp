#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,kk=0;
    cin >> n >> k;
    int i,a[n+1],j ;
    for(i=0 ; i<=n ; i++){
        a[i]=1 ;

    }
    for(i=2 ; i<=n ; i++){
        for(j=i ; j<=n ; j+=i){
            if(a[j]==0){
               continue ;
            }
            a[j]=0 ;
            kk++ ;
            if(kk==k){
                cout << j ;
                return 0 ;
            }

        }
    }
}
