#include<iostream>
using namespace std;
int main(){
ios_base::sync_with_stdio(false); //เพิ่มความเร็วในการแสดงผลลัพธ์ที่มีปริมาณข้อมูลมากๆ
cin.tie(NULL);
int n=4,d=6,l=3, k, i, j,m=0;
char ch='*';
cin >> n >> d >> l >> m;
k = 2*n+1;
// มาร์คตำแหน่งในอาร์เรย์
char a[k][k];
for(int i=0; i<k; i++) {
for(int j=0; j<k; j++) {
if(j>=n-i && j<=n+i && j>=i-n && j<=3*n-i) //3*n-i หรือ k-i+n-1
a[i][j] = ch;
else
a[i][j] = '.';
}
}
// แสดงผลลัพธ์
int p, it;
for(int row=0; row<l+1; row++) {
    p = row%k;
    if(m==1)
        if(p>0) p = k-p;
    for(int i=0; i<k; i++) {
        it = p;
        for(int j=0; j<k*d; j++) {
            cout<<a[i][it++];
        if(it==k) it = 0;
        }
cout<<"\n";
}
}
return 0;
}