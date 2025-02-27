#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(NULL);
    int n, sum, z; // z=เช็คซ้ำเลข 0
    cin>>n;
    char s[9][9];
    int res[n];

     for(int x=0; x<n; x++) {
        res[x]=0;
        for(int i=0; i<9; i++) {
            sum=45, z=0;
            for(int j=0; j<9; j++) {
                cin>>s[i][j];
                sum -= (int) s[i][j] - '0';
                if(s[i][j] == '0') { 
                    z++;
                    res[x] += (j+1)*100 + (i+1)*10;
                }
            }
            if(z>0) res[x] += sum;
        }
    }

    for(int i=0; i<n; i++) { //คำนวณและแสดงผลลัพธ์
         cout<< res[i]<<'\n'; 
    }
}

/*
1
123456789
456789123
789123456
214365897
367894512
598271634
672538941
945612378
831907065
Output: 
1386
*/