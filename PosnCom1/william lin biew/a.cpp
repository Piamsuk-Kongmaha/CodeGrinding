#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	int w,h,n,ha = 0, t= 0;
	cin >> w >> h >> n;
	int count[w] = {};
	for(int i = 0; i < n; i++)
	{
		int a,x;
		cin >> x >> a;
		for(int j = x; j < min(x+a, w) ; j++)
		{
			count[j]++;
		}
	}
	for(int i = 0; i < w; i++)
	{
		if(count[i] == 0)t+=h;
		if(count[i] == 1)ha+=h;
	}

	cout << t << " " << ha;
}