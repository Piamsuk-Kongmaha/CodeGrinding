#include <iostream>
using namespace std;
int main() {
int n=5;
//cin>>n;
int k=n*3, m=n/2;
for(int i=0; i<k; i++) {
    for(int j=0; j<k; j++) {
        if( (j<k/3 && i<k/3) || //มุมซ้ายบน
        (j>=k*2/3 && i<k/3) || //มุมขวาบน
        (j<k/3 && i>=k*2/3) || //มุมซ้ายล่าง
        (j>=k*2/3 && i>=k*2/3) //มุมขวาล่าง
) cout<<"  ";
else if (i == n-1 || i == 2*n) cout << "  ";
else cout<<"* ";
}
cout<<'\n';
}
return 0;
}