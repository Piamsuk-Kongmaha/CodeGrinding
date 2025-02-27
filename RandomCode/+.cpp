#include <bits/stdc++.h>
#define ll long long
using namespace std;



int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a,b,c = 0;
	cin >> a >> b;
	vector<bool> check(b+1, 0);
	for(ll int i = 4; i <= b; i*=2) check[i] = 1;
	for(int i = 3; i*i<= b; i++)
	{
		ll int temp = i*i;
		while(temp <= b)
		{
			check[temp] =1;
			temp *= i;
		}
	}
	for(ll int i = 2; i*i<= b; i++)
	{
		for(ll int j = 2; i*i*j*j*j<= b; j++)
		{
			ll int k = i*i*j*j*j;
			if(k < a) continue;
			if(!check[k]){
				c++;
				check[k]=1;
			}
		}
	}
	cout << c;
	return 0;

}



