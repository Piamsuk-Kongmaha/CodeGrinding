#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Input stuff
    int Amount;
    cin >> Amount;

    for(int i = 0; i < Amount; i++)
    {
        long long FristNum, SecondNum;  cin >> FristNum >> SecondNum;
        long long Diffrence = FristNum + 1 - SecondNum;
        if(Diffrence >= 0 && Diffrence % 9 == 0 ) cout << "Yes";
        else cout << "No";
        cout << '\n';
    }
}