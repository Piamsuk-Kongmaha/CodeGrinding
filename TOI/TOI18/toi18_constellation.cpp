#include <bits/stdc++.h>
using namespace std;

#define N 1000003
#define K 601
char ch[301][301];
int choose[601][601],l;
int dp1[2002][2002] = {}, dp2[1502][1502]={};


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int r,c,k;
	cin >> r >> c >> k;
	l=2*max(r,c);
	for(int i =0; i <= l; i++)choose[0][i] = 1;
	for(int i = 1; i<= k; i++)
	{
		choose[i][0] = 0;
		for(int j = 1; j<=l; j++)
		{
			choose[i][j] = choose[i-1][j-1] + choose[i][j-1];
			choose[i][j] %= N;
		}
	}

	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j < c; j++)
		{
			cin >> ch[i][j];
		}
	}

	for(int i = 0; i < r; i++)
	{
		for(int j = 0; j< c; j++)
		{
			dp1[K+i][K+j] = dp1[K+i-1][K+j+1];
			dp2[K+i][K+j] = dp2[K+i-1][K+j-1];
			if(ch[i][j] == '#')
			{
				dp1[K+i][K+j]++;
				dp2[K+i][K+j]++;
			}
		}
	}

	for(int i = K; i < r+2*K; i++)
	{
		for(int j = 0; j < c+2*K-1; j++)
		{
			if(!dp1[i][j])
			dp1[i][j] = dp1[i-1][j+1];
		}
	}

	for(int i = K; i < r+2*K; i++)
	{
		for(int j = 1; j < c+2*K; j++)
		{
			if(!dp2[i][j])
			dp2[i][j] = dp2[i-1][j-1];
		}
	}

	int ans = 0;
	for(int m = 1 ; m < r+c+1; m++)
	{
		for(int i = K ; i < K+r; i++)
		{
			for(int j= K; j < K+c; j++)
			{
				int u = dp1[i][j-m] - dp1[i-m-1][j+1] + dp1[i+m][j] - dp1[i][j+m] + dp2[i][j+m] - dp2[i-m][j] + dp2[i+m-1][j-1] - dp2[i][j-m];
				ans+=choose[k][u];
				ans%=N;
			}
		}
	}
	cout << ans;

}