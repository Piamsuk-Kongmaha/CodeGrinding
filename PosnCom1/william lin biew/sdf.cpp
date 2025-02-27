#include <bits/stdc++.h>
using namespace std;
vector<bool> prime(10000001,false);
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c = 0;
    int n;
    cin >> n;
	for(long long int i = 2;i <= 10000000 ;i++)
	{

		if(prime[i]) continue;
            c++;
            if(c >= n)
            {
                cout << i;
                return 0;
            } 
			for(long long int j = 2*i; j<=10000000; j+=i)
				prime[j]=true;
	}
}
