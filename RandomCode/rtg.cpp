#include <bits/stdc++.h>

using namespace std;

#define k 20000000
vector<int> v1(k);

int main()
{
	for(int i = 3; i <= k/i; i+=2)
	{
		for(int j = i; j <= k/i; j++)
		{
			v1[i*j] = 1;
		}
	}
	
	int n,c = 1;
	cin >> n;
	cout << 2 << " ";
	
	/*for(int i = 3; i<n ;i++)
	{
		if(c < n && v1[i] == 0 )
		{
			cout << i << " ";
		}
	*/
	
	for(int i = 3; i<k ;i+=2)
	{
		if(c < n && v1[i] == 0 )
		{
			cout << i << " ";
			c++;
		}
	}
}
