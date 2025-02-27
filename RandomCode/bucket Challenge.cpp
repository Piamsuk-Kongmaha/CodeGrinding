#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int m, n, l;
    cin >> m >> n >> l;
    int b1 = 0, b2 = 0;
    stringstream output;
    output << "[(0,0)";
    while(!(b2 == l || b1 == l))
    {
        if(b1 == 0)
        {
            b1 = m;
            output << ", (" << b1 << ", " << b2 << ")";
        }
        if(b1 != 0) // transfer
        {
            int transfer = min(b1, n-b2);
            b2 += transfer;
            b1 -= transfer;
            output << ", (" << b1 << ", " << b2 << ")";
        }
        if(b2 == n)
        {
            b2 = 0;
            output << ", (" << b1 << ", " << b2 << ")";
            if (b1 == 0)
            {
                cout << "no solution";
                return 0;
            }
        }
    }
    output << "]";
    cout << output.str(); 
    return 0;
}
