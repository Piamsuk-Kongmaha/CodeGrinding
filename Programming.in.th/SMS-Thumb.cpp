#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, st, num;
    cin >> a >> st >> num;
    char c[10][5];
    vector<char> v;
    
    c[2][0]='A';c[2][1]='B';c[2][2]='C';
    c[3][0]='D';c[3][1]='E';c[3][2]='F';
    c[4][0]='G';c[4][1]='H';c[4][2]='I';
    c[5][0]='J';c[5][1]='K';c[5][2]='L';
    c[6][0]='M';c[6][1]='N';c[6][2]='O';
    c[7][0]='P';c[7][1]='Q';c[7][2]='R';c[7][3]='S';
    c[8][0]='T';c[8][1]='U';c[8][2]='V';
    c[9][0]='W';c[9][1]='X';c[9][2]='Y';c[9][3]='Z';

    if(st!=1) {
        if(st==7||st==9) {
            num=(num-1)%4;
            v.push_back(c[st][num]);
        } else {
            num=(num-1)%3;
            v.push_back(c[st][num]);
        }
    }
    
    a--;
    while(a--) {
        int x, y;
        cin >> x >> y >> num;
        st += x;
        st = st + 3*y;
        if(st==1 && !v.empty()) {
            if(v.size() < num) {
                v.clear();
                continue;
            }
            while(num--) v.pop_back();
        } else {
            if(st==7||st==9) {
                num=(num-1)%4;
                v.push_back(c[st][num]);
            } else {
                num=(num-1)%3;
                v.push_back(c[st][num]);
            }
        }
    }
    
    if(v.empty()) {
        cout << "null";
        return 0;
    }
    
    for(int i=0; i < v.size(); i++) {
        cout << v[i];
    }
}