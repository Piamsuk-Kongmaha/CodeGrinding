#include <bits/stdc++.h>

using namespace std;

string binary(int n)
{
    string s="";
    while(n){
        s = to_string(n%2) +s;
        n/=2;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << binary(n);
}