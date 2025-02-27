#include <bits/stdc++.h>

using namespace std;

bool parincheck(string n)
{
	string palin = "";
	for(int i = n.length() -1; i >=0; i-- ) palin += n[i];
	if(palin == n) return true;
	else return false;
}

vector<bool> prime(2000000, true);

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for(long long int i = 2;i <= 2000000 ;i++)
	{
		if(prime[i])
		{
			for(long long int j = 2*i; j<=2000000; j+=i)
			{
				prime[j]=false; 
			}
		}
	}
	int n;
	cin >> n;
	
	while(true)
	{
		string k = to_string(n);
		if(prime[n] && parincheck(k))
		{
			cout << n;
			break;
		}else
		{
			n++;
		}
	}
	return 0;
}
