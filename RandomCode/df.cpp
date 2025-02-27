#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    cin >> x;
    for (int i=1; i<=5; i++){
        for (int j=1; j<=x.length(); j++){
            if (i==1 || i==5){
                if (j%3!=0) cout << "..#.";
                else cout << "..*.";
            }else if (i==2 || i==4){
                if (j%3!=0) cout << ".#.#";
                else cout << ".*.*";
            }else {
                if (j%3==0 || ((j-1)%3==0 && j!=1)) cout << "*." << x[j-1] << ".";
                else cout << "#." << x[j-1] << ".";
            }
        }
        if (i<=5 && i!=3) cout << ".";
        else if (x.length()%3==0) cout << "*";
        else cout << "#";

        cout <<endl;
    }

    return 0;
}
