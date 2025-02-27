/*
TASK: bitstring
LANG: C++
AUTHOR: Jessada Tanthanuch
CENTER: SUT
*/
#include <bits/stdc++.h>
using namespace std;

char st[25], sub[25];
int n, c=0;

void think(int deep) {
   
    if (deep==n) {  
        cout<<st<<'\n';        
        if (strstr(st,sub)!= NULL) c++;
    } else {
        st[deep] = '0';
        think(deep+1);
        st[deep] = '1';
        think(deep+1);
    }
}
int main() {
    cin>>n>>sub;
    st[n]=0;
    think(0);
    cout<<c;
    return 0;
}