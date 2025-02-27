#include <bits/stdc++.h>
using namespace std;
#define k 20000000
vector<bool> memo(k,1);
int main()
{
	unsigned long long i,j,m=sqrt(k);
	for(i = 3; i <= m; i+=2)
	{
		for(j = i; i*j<=k; j+=2);
			memo[i*j] = 0;
	}
    
    long long int n;
    cin >> n;
    if(memo[n] == 1) cout<< "yes";
    else cout << "no";
}
            