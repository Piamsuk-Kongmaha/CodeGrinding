#include <iostream>
using namespace std;
int main() {
int n=5;
//cin>>n;
int k=n*3, m=n/2;
for(int i=0; i<k; i++) {
    for(int j=0; j<k; j++) {
        if( (i<k/3 || i>=k*2/3) //มุมขวาล่าง
            ) cout<<"  ";
        else cout<<"* ";
        }
    cout<<'\n';
    }
   return 0;
}