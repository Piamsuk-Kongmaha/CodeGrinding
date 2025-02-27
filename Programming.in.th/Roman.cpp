#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int k = 0,v = 0,x = 0,l = 0,c = 0;
    int n;
    cin >> n;

    for(int q =1; q <= n; q++)
    {
        int i = q;
        
        while(i!=0)
        {
        if(i>=100){
            c++; i-=100;
        } 
        else if(i>=90){
            x++; c++; i-=90;
        } 
        else if(i>=50) {
            l++; i-=50;
        }
        else if(i>=40){
             x++; l++; i-=40;
        }
        else if(i>=10){
            x++; i-=10;
        } 
        else if(i>=9) {
            x++; k++; i-=9;
        }
        else if(i>=5) {
            v++; i-=5;
        }
        else if(i>=4){
            v++; k++; i-=4;
        } 
        else if(i>=1)
        {
            k++; i-=1;
        } 
        }
    }
    cout << k << " " << v << " " << x << " " << l << " " << c;
}