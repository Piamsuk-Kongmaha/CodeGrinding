#include <bits/stdc++.h>

using namespace std;

vector<bool> prime(20000002,true);

int main()
{
    float s = clock();
    for(long long int i = 2;i <= 20000002 ;i++)
	{
		if(prime[i])
		{
			for(long long int j = 2*i; j<=20000002; j+=i)
			{
				prime[j]=false; 
			}
		}
	}
    float e = clock();
    cout << fixed << setprecision(6) << (e-s)/CLOCKS_PER_SEC;
}