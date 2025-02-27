#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,answer=0;
    int temp = 5;
    cin >> n;
    while(temp<=n)
    {
        answer+=n/temp;
        temp*=5;
    }
    cout << answer;
}