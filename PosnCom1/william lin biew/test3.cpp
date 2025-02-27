#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<pair<double, int> > v1;
	int n,m,o;
	int itr = 0;
	cin >> n;
	while(n--)
	{
		double p,q;
		cin >> p >> q;
		v1.push_back(make_pair(p/q, q));
	}
	sort(v1.begin(),v1.end());
	cin >> m;
	while(m--)
	{
		cin >> o;
		double sum = 0;
		while(o > 0)
		{
			if(v1[itr].second > o)
			{
				sum+= v1[itr].first * o;
				v1[itr].second -= o;
				o = 0;
			}else
			{
				sum+= v1[itr].second * v1[itr].first;
				o-=v1[itr].second;
				itr++;
			}
		}
		cout << fixed << setprecision(3) << sum << '\n';
	}
	
	
	
}
