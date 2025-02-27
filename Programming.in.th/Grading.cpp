#include <bits/stdc++.h>

using namespace std;

int main()
{
    int sum = 0;
    for(int i =0; i<3;i++)
    {
        int tmp;
        cin >> tmp;
        sum+=tmp;
    }

    
        if(sum >= 80) cout << 'A';
        else if (sum >= 75 && sum <= 79) cout << "B+";
        else if (sum >= 70 && sum <= 74) cout << "B";
        else if (sum >= 65 && sum <= 69) cout << "C+";
        else if (sum >= 60 && sum <= 64) cout << 'C';
        else if (sum >= 55 && sum <= 59) cout << "D+";
        else if (sum >= 50 && sum <= 54) cout << 'D';
        else if (sum >= 0 && sum <= 49) cout << 'F';


}