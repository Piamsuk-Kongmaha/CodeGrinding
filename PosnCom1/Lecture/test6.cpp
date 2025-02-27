#include <iostream>
using namespace std;
int main(){
int i, j, n;
cin>>n;
int rows[n];
int m[n][2], max=0;
for (int x=0; x<n; x++) {
    cin>>m[x][0]>>m[x][1];
    rows[x] = m[x][0]+1+m[x][1];
    if (rows[x]>max) max=rows[x];
}
for (i=max; i>=1; i--) {
    for (int c=0; c<n; c++) { 
        int mid = (m[c][0]*2+2)/2;
        for (j=1; j<=mid; j++) {
        if (rows[c] >= i)
            if (i-m[c][1] >= 1)
                if (j == i - m[c][1])
                    cout<<"/";
                else
                    cout<<" ";
            else
                if (j==1)
                    cout<<"|";
                else
                    cout<<".";
        else
            cout<<" ";
        }
        for (j=1; j<=mid; j++) { 
            if (rows[c]>=i)
                if (i-m[c][1] >= 1)
                    if (j==rows[c]-i+1)
                        cout<<"\\";
                    else
                        cout<<" ";
                else
                    if (j==mid)
                        cout<<"|";
                    else
                        cout<<".";
            else
                cout<<" ";
        }
    cout<<" ";
    }
cout<<"\n";
}
}