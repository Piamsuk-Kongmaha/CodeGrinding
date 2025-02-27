#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<char> nprime(100000,0);
    for(unsigned int i = 3; i*i < 100000; i+=2)
    {
        for(unsigned int j = i; i*j < 100000; j+=2)
        {
            nprime[i*j] = 1;
        }
    }


    int n;
    cin >> n;
    if(!nprime[n] && n%2) cout << "yes";
    else cout << "no";
}