#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second
#define pii pair<int, int>
#define mp make_pair
int main()
{
	int n,k;
	cin >> n >> k;
	vector<int> v;
	v.push_back(0);
	for(int i = 0; i < n;i++)
	{
		int t; 
		cin >> t;
		v.push_back(t);
	}
	int dp[n+1];
	priority_queue <pii, vector<pii>, greater<pii> > pq;
	
	dp[1] = v[1];
	pq.push(mp(dp[1], 1));
	for(int i = 2; i <=n; i++)
	{
		while(pq.top().s + k < i)
			pq.pop();
		dp[i] = v[i] + pq.top().f;
		pq.push(mp(dp[i],i));
	}
	
	cout << dp[n];
	return 0;
}
