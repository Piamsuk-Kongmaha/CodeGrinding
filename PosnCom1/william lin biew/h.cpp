/*
TASK: crypto
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,key,unlock;
    char encryp[1001],decryp[1001];
    cin >> encryp;
    cin >> key;
    for (i=1;i<44;i++)
       if (i*key%43==1) unlock=i;

    for (i=0;encryp[i]!=0;i++)
        decryp[i] = ((encryp[i]-'0')*unlock)%43+'0';
    decryp[i] = 0;
    cout << decryp;
    return 0;
}
