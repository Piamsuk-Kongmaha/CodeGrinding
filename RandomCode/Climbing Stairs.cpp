#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	if (n==1)
	{
		cout << "1";
	}
	if(n==2)
	{
		cout << "2";
	}
	long long int result = 0;
	long long int o = 1, tw = 2;
	for(int i = 2; i< n; i++)
	{
		result = o+tw;
		o = tw;
		tw = result;
	}
	
	cout << result;
}
