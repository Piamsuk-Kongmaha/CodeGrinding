#include <bits/stdc++.h>
using namespace std;
vector<bool> prime(20000000,true);
int main()
{
	for(long long int i = 2;i <= 20000000 ;i++)
	{
		if(prime[i])
		{
			for(long long int j = 2*i; j<=20000000; j+=i)
			{
				prime[j]=false; 
			}
		}
	}
    long long int n;
    cin >> n;
    if(prime[n]) cout<< "yes";
    else cout << "no";
}
