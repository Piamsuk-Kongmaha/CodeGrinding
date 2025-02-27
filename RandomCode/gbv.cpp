#include <bits/stdc++.h>

using namespace std;

char checkprime(int n)
{
    if(n==2) return 1;
    if(n%2==0) return 0;
    if(n==3 || n == 5 || n==7 ) return 1;
    for(int i = 3; i<= sqrt(n); i+=2)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << (int)checkprime(n) << " ";
    return 0;
}
