
#include <iostream>
using namespace std;
int main()
{
    int n,num,i,p,c;
    cin >> n;
    for (i=0;i<n;i++)
    {
        cin >> num;
        c=0;
        for (p=2;p*p<=num;p++)
            while (num%p==0)
            {
                c++;
                num/=p;
            }
        if (num>1) c++;
        cout << c << endl;
    }
    return 0;
}
