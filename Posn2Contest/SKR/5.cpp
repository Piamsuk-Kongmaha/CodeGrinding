#include<bits/stdc++.h>
#define inf 1e18
#define int long long
using namespace std;

const int N = 1e6;

int board[N+5];
bool vis[N+5];
int n, m;

int h(int i, int j){
return i*m+j;
}

int dir[4][2] = {
    {-1,0},
    {1,0},
    {0,-1},
    {0,1}
};

int32_t main(){
ios_base::sync_with_stdio(0); cin.tie(0);
cin>>n>>m;
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
cin>>board[h(i,j)];
}
}
    priority_queue<pair<int,pair<int,int>>> pq;
    pq.push({-board[0],{0,0}});
    int mx = 0;
    while(!pq.empty()){
        int i = pq.top().second.first, j = pq.top().second.second;
        pq.pop();
        if(vis[h(i,j)]) continue;
//         cout<<i<<' '<<j<<' '<<board[h(i,j)]<<'\n';
        vis[h(i,j)] = 1;
        mx = max(mx,board[h(i,j)]);
        if(i == n-1 && j == m-1){
            cout<<mx<<'\n';
            return 0;
}
        for(int k=0;k<4;k++){
            int nx = i+dir[k][0], ny = j+dir[k][1];
            if(0<=nx&&nx<n&&0<=ny&&ny<m&&!vis[h(nx,ny)]){
                pq.push({-board[h(nx,ny)],{nx,ny}});
            }
        }
    }
    cout<<"Bad\n";
}