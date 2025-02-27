#include <bits/stdc++.h>

using namespace std;

int g(int a, int b)
{
    if(b == 0) return a;
    g(b,a%b);
}

int main()
{
    int a,b;
    cin >> a >> b;
    float s = clock();
    int m = max(a,b);
    int n = min(a,b);
    cout << (m,n);
    float e = clock();
    cout << fixed << setprecision(6) << (e-s)/CLOCKS_PER_SEC; 
    
}