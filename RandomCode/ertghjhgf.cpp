#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k,w=1,m=1;
	cin >> n;
	int s[n];
	for(int i =0; i <n; i++) cin >> s[i];
	sort(s,s+n);
	k = pow(2,n);
	vector<vector<int> > a[k];
	for(int j =0; j < n; j++)
	{
		for(int i = 0; i < k; i++)
		{
			if(i%w==0) m=1-m;
			if(m==1) a[i].push_back(s[j]);
		}
		
		w*=2;
	}
	
	sort(a.begin(), a.end())
	{
		for(int i = 1; i < k ; i++)
		{
			cout << a[i][0];
			for(int j = 1; j < a[i].size();j++)
			{
				cout << "," << a[i][j];
			}
			cout << '\n';
		}
	}
}
