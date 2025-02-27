#include <iostream>
using namespace std;
int main() {
int n=10;
//cin>>n;
int k=n*3, m=n/2;
for(int i=0; i<k; i++) {
    for(int j=0; j<k; j++) {
            if(i <= j+n-2 && i>= j-n+2 || i+j <= k+n-3 &&  i+j >= k-n+1) cout << "* ";
            else cout << "  ";
        }
    cout<<'\n';
    }
    return 0;
}