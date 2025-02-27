#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double sum = 0;

    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            int a;
            cin >> a;
            switch (j)
            {
            case 0:
                sum+=a;
                break;
            case 1:
                sum+=a*0.75;
                break;
            case 2:
                sum+=a*0.5;
                break;
            case 3:
                sum+=a*0.25;
                break;
            default:
                sum+=a*0.125;
                break;
            }
        }
    }

    cout << ceil(sum);
    return 0;
}