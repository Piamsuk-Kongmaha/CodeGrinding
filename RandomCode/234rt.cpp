#include <iostream>
#include <algorithm>
using namespace std;

const int N = 5005;

int n,t[N],dp[N][N],sol[N];

int eat(int l,int r){

	if(dp[l][r] != -1) return dp[l][r];

	if(l == r) return t[l];

	return dp[l][r] = max(eat(l+1,r) + t[l] + abs(t[l] - t[r]),eat(l,r-1) + t[r] + abs(t[l]-t[r]));

}

int solve(int l){

	if(sol[l] != -1) return sol[l];

	if(l == 1) return t[l];

	int maxnum = 0;

	for(int i=3;i<l-2;++i){

		maxnum = max({maxnum,solve(i) + eat(i+1,l),eat(1,i) + eat(i+1,l)});

	}

	return sol[l] = maxnum;

}

int main(){

	ios_base::sync_with_stdio(false);

	cin.tie(NULL);

	cin >> n;

	for(int i=1;i<=n;++i) for(int j=1;j<=n;++j) dp[i][j] = -1;

	for(int i=1;i<=n;++i){

		cin >> t[i];

		sol[i] = -1;

	}

	cout << max(solve(n),eat(1,n));

}
