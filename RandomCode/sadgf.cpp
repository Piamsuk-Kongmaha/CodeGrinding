#include<iostream>
#include <string>

#define lln long long int

using namespace std;

const int mod=1e6+7;

int k,m,n,l;

int h[(mod+1)],r[(mod+1)],check[100001];

string str1,str2;

int main(){

    ios_base::sync_with_stdio(false);cin.tie(NULL);

    cin>>k>>m;

    for(int i=1;i<=k;i++){

        cin>>str1;

        int hz=0;

        for(auto s:str1)hz=(hz<<1)+(s-'0');

        int id=hz%mod;

        while(h[id])id=(id+1)%mod;

        h[id]=i;

        r[i]=hz;

    }

    cin>>n;

    while(n--){

        cin>>l>>str2;

        int hx=0;bool f=0;

        for(int i=0;i<m-1;i++)hx=(hx<<1)+(str2[i]-'0');

        for(int i=m-1;i<l;i++){

            hx=(hx<<1)+(str2[i]-'0');

            int id=hx%mod;

            while(h[id]){

                if(!(r[h[id]]^hx)){

                    check[h[id]]=1;

                    f=1;break;}

                id++;

            }

            hx-=(hx&(1<<(m-1)));

        }

        if(!f){cout<<"OK"<<endl;continue;}

        for(int i=1;i<=k;i++)if(check[i]){cout<<i<<" ";check[i]=0;} cout<<endl;

    }

    return 0;

}
