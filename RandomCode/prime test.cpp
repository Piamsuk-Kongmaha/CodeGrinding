#include <bits/stdc++.h>

using namespace std;



int main()
{
	int n=30000;
    vector<bool>prime(n);
    for(int i=3;i * i<=n;i+=2){
        for(int j=i;j * i<=n;j+=2){
            prime[i*j]=1;
        }
    }
	int q;
	cin >> q;
	
	if(prime[q] == 1)
	{
		cout<< "it's a prime";
	}else
	{
		cout << "it's not a prime";
	}
	
	return 0;
}
