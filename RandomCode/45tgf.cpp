
/*
LANG: C++
AUTHOR : Piamsuk Kongmaha
CENTER: SUT
*/

#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    string st;
    int n,h,i,j,k,l;
    cin >> st;
    n = st.length();
    cin >> h;
    for (i=0;i<n;i++)
        for (j=0;j<h;j++)
        {
            for (k=0;k<h*i;k++) cout << '.';
            for (k=0;k<n-i;k++)
                for (l=0;l<2*h;l++) if (l>=j && l<2*h-j-1) cout << st[i]; else cout << '.';
            for (k=0;k<h*i;k++) cout << '.';
            cout << endl;
        }
    return 0;
}
