/*
TASK: quinary
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/

#include <iostream>
using namespace std;
int main()
{
    int i,k,n,sign,tag,d;
    cin >> k;
    for (i=0;i<k;i++)
    {
      cin >> n;
      if (n==0) cout << 0;
      tag = 0;
      if (n>0) sign=1; else {sign=-1;n=-n;}
      for (;n>0;n/=5)
      {
        d = n%5+tag;
        if (d<3) {cout << sign*d << ' '; tag=0;} else
                 {cout << -sign*(5-d) << ' '; tag=1;}
      }
      if (tag>0) cout << sign*tag;
      cout << endl;
    }
    return 0;
}


/*
  5
  4
  8
  -8
  13
  -134
*/
