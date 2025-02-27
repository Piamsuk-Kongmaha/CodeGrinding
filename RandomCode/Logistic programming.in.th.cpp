#include<bits/stdc++.h>

using namespace std;


const int N = 100;

vector<int> dp[N][N];

bool visit[N];

vector<int> path;

vector<int> adj[N];


double sum =0;

int main(){

    cin.tie(0)->sync_with_stdio(false);

    //memset(dp,0,sizeof(dp));

    int n;

    cin>>n;


    for(int i=0;i<n;i++){

        char a,b;

        int c;

        cin>>a>>b>>c;

        dp[a-'X'][b-'X'].push_back(c);

        dp[b-'X'][a-'X'].push_back(c);


        adj[a-'X'].push_back(b-'X');

        adj[b-'X'].push_back(a-'X');


    }

    queue<int> q;

    q.push(0);

    visit[0]= true;

    while(!q.empty()){

        int k = q.front();

        q.pop();


        path.push_back(k);

        for(auto x:adj[k]){

            if(visit[x]) continue;


            q.push(x);

            visit[x]=true;

            break; 
        }



    }


    if(!visit[1]) {

        cout<<"broken";

        return 0;

    }



    for(int i=0;i<path.size()-1;i++){

        int u = path[i],v = path[i+1];

        sort(dp[u][v].begin(),dp[u][v].end());


        double med;

        int s = dp[u][v].size();

        if(s%2==1) med = dp[u][v][s/2];

        else med = (dp[u][v][s/2]+dp[u][v][s/2-1])/2.0;


        printf("%c %c %.1f\n",'X'+u,'X'+v,med);

        sum+=med;

    }


    printf("%.1f",sum);



return 0;

}
