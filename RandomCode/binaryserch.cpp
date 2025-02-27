#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[100000]; // array size can be from 1 - 1000000;
	int i,n,f,x =0; 
	memset(a,0,sizeof(a)); // memset can just set array from 0 and 1
	cin >> n >> f;
	for ( i=0;i < n; i++)
	{
		cin >> x;
		a[x]++;
	}
	cout << a[f];
}

