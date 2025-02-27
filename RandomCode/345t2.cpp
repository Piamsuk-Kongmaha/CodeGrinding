#include <iostream>
using namespace std;
const int N=2005;
int n,m,k,dp[N][N],t1[N][N],t2[N][N],ans=-1e9;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> n >> m >> k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int x;
            cin >> x;
            dp[i][j]=x+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            t1[i][j]=x;
            t2[i][j]=x;
            if(j>1) t1[i][j]+=t1[i][j-1]+t1[i-1][j-1]-t1[i-1][j-2];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=m;j>0;j--){
            t2[i][j]+=t2[i][j+1]+t2[i-1][j+1]-t2[i-1][j+2];
        }
    }
    for(int i=k;i<=n;i++){
        for(int j=k;j<=m;j++){
            ans=max(ans,t1[i][j]-(dp[i][j-k]-dp[i-k][j-k]+t1[i-k][j-k]));
        }
    }
    for(int i=k;i<=n;i++){
        for(int j=m-k+1;j>0;j--){
            ans=max(ans,t2[i][j]-(dp[i][m]-dp[i-k][m]-dp[i][j+k-1]+dp[i-k][j+k-1]+t2[i-k][j+k]));
        }
    }
    cout << ans;
}
