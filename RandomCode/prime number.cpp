#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int s = 10000000;
	vector<int> v(s);
	int i,j;
	for (i = 3; i <=s/i;i+=2)
	{
		for(j = 3;j*i<s;j+=2)
		{
			//cout << j*i<<" ";
			v[j*i] = 1;
		}
	}
	cout << '\n';
	cout << 2 << " ";
	for(i =3; i<s; i+=2)
	{
		if(!v[i])cout<<i<<" ";
	}
	return 0;
}
