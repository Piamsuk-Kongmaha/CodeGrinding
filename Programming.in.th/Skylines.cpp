#include <bits/stdc++.h>

using namespace std;

vector<int> ar(256,0);

int main()
{
	int n;
	cin >> n;
	int check = 0; 
	for(int i = 0; i < n; i++)
	{
		int l,h,r;	

		cin >> l >> h >> r;

		for(int j = l; j < r; j++)
		{
			if(ar[j] < h)ar[j] = h;
		}
	}
	
	for(int i = 0; i < 256; i++)
	{
		if(ar[i] != check)
		{
			cout << i << ' ' << ar[i] << ' ';
			check = ar[i];
		}
	}
	return 0;
}
