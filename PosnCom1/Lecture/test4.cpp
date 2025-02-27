#include <bits/stdc++.h>
using namespace std;
int main() {
int n, max=0;
string c="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cin>>n;
int m[n];
for (char i=0; i<n; i++) {
    cin>>m[i];
    if (m[i]>max) max=m[i];
}
for (int i=max; i>0; i--) {
    for (int k=0; k<n; k++) {
        for (int j=1; j<=m[k]; j++) {
            if (j<i) cout<<" ";
            else if (j==i) cout<<c[i];
            else cout<<"_";
        }
        for (int j = m[k]-1; j >=1; j--) {
            if (j < i) cout << " ";
            else if (j == i) cout<<c[i];
            else cout << "_";
        }
        cout<<" ";
    }
    cout<<"\n";
}
return 0;
}