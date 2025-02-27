#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n; 
    for(int i =0; i < n; i++)
    {
        int a[6] = {1,2,3,5,4,6};
        string tmp;
        cin >> tmp;
        for(int j = 0; j < tmp.size(); j++)
        {
            int t;

            if(tmp [j] == 'F')
            {
                t = a[1];
                a[1] = a[0];
                a[0] = a[3];
                a[3] = a[5];
                a[5] = t;

            }
            else if(tmp[j] == 'B')
            {
                t = a[1];
                a[1] = a[5];
                a[5] = a[3];
                a[3] = a[0];
                a[0] = t;
            }
            else if(tmp[j] == 'L')
            {
                t = a[0];
                a[0] = a[4];
                a[4] = a[5];
                a[5] = a[2];
                a[2] = t;
            }
            else if(tmp[j] == 'R')
            {
                t = a[0];
                a[0] = a[2];
                a[2] = a[5];
                a[5] = a[4];
                a[4] = t;
            }
            else if(tmp[j] == 'C')
            {
                t = a[1];
                a[1] = a[4];
                a[4] = a[3];
                a[3] = a[2];
                a[2] = t;
            }
            else if(tmp[j] == 'D')
            {
                t = a[1];
                a[1] = a[2];
                a[2] = a[3];
                a[3] = a[4];
                a[4] = t;
            }

            

        }
        cout << a[1] << ' ';
    }
    return 0;
}