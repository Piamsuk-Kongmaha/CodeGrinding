/*
TASK:squre
LANG:C++
AUTHOR : Piamsuk Kongmaha
CENTER: SUT
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    char ver[100][256],hor[100][256],c;
    int chk,repeat,i,j,k,l,n,num[256];
    cin >> k >> n;
    for (l=0;l<k;l++)
    {
       memset(ver,0,sizeof(ver));
       memset(hor,0,sizeof(hor));
       memset(num,0,sizeof(num));
       chk = 0; repeat = 0;
       for (i=0;i<n;i++)
        for (j=0;j<n;j++)
        {
            cin >> c;
            if (ver[i][c] || hor[j][c]) repeat++;
            ver[i][c]=1;
            hor[j][c]=1;
            num[c]++;
        }
       for (j=0;j<256;j++) if (num[j]==n) chk++;
       if (repeat == 0 && chk==n) cout << 'Y' << endl; else cout << 'N' << endl;
    }
    return 0;
}
