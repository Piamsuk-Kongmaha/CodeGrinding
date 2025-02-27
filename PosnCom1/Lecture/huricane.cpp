#include <bits/stdc++.h>
using namespace std;
char a[1000][1000];
int main(){ 
    ios::sync_with_stdio(0); cin.tie(0);
memset(a,'.',sizeof a); string s; cin >> s;
int n=s.size(),x=500,y=500,chk=1,xmax=x,xmin=x,ymax=y,ymin=y;
if(n==5 || n==7) chk=0;
for(int k=0;k<4;k++){ x=500; y=500;
for(int i=0;i<n;i++){ int m=i+1,b=(i+1)%8,d=(b+k*2)%8;
if(d==1){
for(int j=0;j<m;j++) a[x-j][y]=s[j];
x-=m;
}else if(d==2){
 for(int j=0;j<m;j++) a[x-j][y-j]=s[j];
 x-=m; y-=m;
 }else if(d==3){
 for(int j=0;j<m;j++) a[x][y-j]=s[j];
 y-=m;
 }else if(d==4){
 for(int j=0;j<m;j++) a[x+j][y-j]=s[j];
 x+=m; y-=m;
 }else if(d==5){
 for(int j=0;j<m;j++) a[x+j][y]=s[j];
 x+=m;
 }else if(d==6){
 for(int j=0;j<m;j++) a[x+j][y+j]=s[j];
 x+=m; y+=m;
 }else if(d==7){
 for(int j=0;j<m;j++) a[x][y+j]=s[j];
 y+=m;
 }else if(d==0){
 for(int j=0;j<m;j++) a[x-j][y+j]=s[j];
x-=m; y+=m;
 }
 xmax=max(xmax,x); xmin=min(xmin,x); ymax=max(ymax,y); ymin=min(ymin,y);
 } } for(int i=xmin+chk;i<=xmax-chk;i++){
 for(int j=ymin+chk;j<=ymax-chk;j++) cout << a[i][j];
 cout << "\n";
 } return 0;
 }