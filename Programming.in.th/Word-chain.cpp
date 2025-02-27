#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,n;
    string old ;
    string temp;

    cin >> l >> n;
    cin >> old;
    for(int i =0; i < n-1; i++)
    {
        cin >> temp;
        int c = 0;
        for(int j =0; j < l; j++)
        {
            if(old[j]!=temp[j]) c++;
            if(c>2)
            {
                cout << old; 
                return 0;
            }
        }
        old = temp;
    }
    cout << old;
    return 0;
}