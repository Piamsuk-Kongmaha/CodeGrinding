#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[100], b[100];
    for(int i =0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    double m= 0;
    for(int i = 0; i < n; i++)
    {
        for(int j =0; j < n; j++)
        {
            for(int k = 0; k < n; k++)
            {
                double c = abs(a[i]*b[j] + a[j]*b[k] + a[k]*b[i] - b[i]*a[j] - b[j]*a[k] - b[k]*a[i])/2.0;
                m = max(c,m);
            }
        }
    }
    cout << fixed << setprecision(3) << m;

    return 0;
}