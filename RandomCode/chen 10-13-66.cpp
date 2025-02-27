/*
TASK:chen
LANG:C++
AUTHOR : Piamsuk Kongmaha
CENTER: SUT
*/

#include <iostream>
#include <vector>
#define max 20000001
using namespace std;
int main()
{
    vector<char> prime(max+3);
    int i,j,pp,mmin,mmax,chk=0;
    cin >> mmin >> mmax;
    fill(prime.begin(),prime.end(),1);
    for (i=2;i<=(mmax+2)/2;i++)
        if (prime[i])
          for (j=2*i;j<=mmax+2;j+=i)
            prime[j] = 0;
    for (i=mmin;i<=mmax;i++)
    {
        if (prime[i]==1)
        {
            pp = i+2;
            if (prime[pp]==1) chk++; else
                for (j=2;j*j<=pp;j++)
                    if (pp%j==0)
                    {
                        if (prime[j]==1 && prime[pp/j]==1) chk++;
                        break;
                    }
        }
    }
    cout << chk;
    return 0;
}
