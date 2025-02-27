#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n;
    char c;
    unsigned int col[n] , row[n];
    cin >> k >> n;
    for(int g = 0; g < k; g++)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j  =0; j < n; j++)
            {
                cin >> c;
                col[j]+=c;
                row[i]+=c;
            }
        }
        bool check = true;
        for(int i = 0; i < n-1; i++)
        {
            if(col[i] != col[i+1] || (col[i] + 0.0)/int(c) == n){check = false; break;}
                if(row[i]!= row[i+1]) {check=false; break;}
        }
        if(check) cout << "N\n";
        else cout << "Y\n";
    }
    return 0;
}
/*
4 3
3 4 5
4 5 3
5 3 4
* * *
* * *
* * *
B C A
A B C
C A T
B C A
A B C
C A B
*/