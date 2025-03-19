#include<bits/stdc++.h>
#define inf 1e18
#define int long long
using namespace std;

int dp[400+5][400+5];
int board[20+5][20+5];
int n, m;

int h(int i, int j){
	return i*m+j;
}

int32_t main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin>>n>>m;
	int sz = n*m;
	for(int i=0;i<sz;i++){
		for(int j=0;j<sz;j++){
			dp[i][j] = inf;
		}
		dp[i][i] = 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>board[i][j];
		}
		for(int j=0;j<m-1;j++){
			dp[h(i,j)][h(i,j+1)] = board[i][j+1];
			dp[h(i,j+1)][h(i,j)] = board[i][j];
		}
	}
	for(int j=0;j<m;j++){
		for(int i=0;i<n-1;i++){
			dp[h(i,j)][h(i+1,j)] = board[i+1][j];
			dp[h(i+1,j)][h(i,j)] = board[i][j];
		}
	}
	for(int k=0;k<sz;k++){
		for(int i=0;i<sz;i++){
			for(int j=0;j<sz;j++){
				dp[i][j] = min(dp[i][j],dp[i][k]+dp[k][j]);
			}
		}
	}
	int q; cin>>q;
	while(q--){
		int a, b, x, y;
		cin>>a>>b>>x>>y;
		a--, b--, x--, y--;
//		cout<<h(a,b)<<' '<<h(x,y)<<' ';
		cout<<dp[h(a,b)][h(x,y)]<<'\n';
	}
}
