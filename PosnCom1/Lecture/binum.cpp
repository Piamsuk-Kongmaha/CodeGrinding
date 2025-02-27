#include <bits/stdc++.h>
using namespace std;

void binum(int n)
{
    stack<int> c;
    int i =0;
    while(n > 0)
    {
        c.push(n%2);
        n/=2;
        i++;
    }
   while(!c.empty())
   {
    cout << c.top();
    c.pop();
   }
}

int main()
{
    int n;
    cin >> n;
    binum(n);
    return 0;
}