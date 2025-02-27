#include<iostream>

using namespace std;

void pyra(int a,int b,int c,char n){

    int d=2*c+1;
    for(int i=1;i<=a;i++)
        {for(int j=1;j<=d;j++)
          {
                if(j==1) for(int k=a*b-a*(c-1)-i;k>0;k--) cout<<".";
                else if(j==d) for(int k=a*b-a*(c-1)-i+1;k>0;k--) cout<<".";
                else if(j%2==1) for(int k=2*(a-i)+1;k>0;k--) cout<<".";
                else if(j%2==0) for(int k=2*i-1;k>0;k--) cout<<n;
            }cout<<endl;
          }


          }

int main(){

    int m,n;
    char c;
cin>>c>>m>>n;
for(int i=1;i<=n;i++)
    pyra(m,n,i,c);







return 0;
}


