#include <bits/stdc++.h>
using namespace std;
#define k 20000002;
vector<char> memo(k,1);
int main()
{
	int n;
	cin >> n;
	bool check = true;
    for (int j = 2; j <= sqrt(n);j++) {
    	if (n % j == 0) {
            check = false;
            break;
        }
    }
    
    if(check) cout << "yes";
    else cout << "no";
}
            
