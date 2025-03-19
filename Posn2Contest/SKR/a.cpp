#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, vector<int>> stb;

    vector<vector<int>> bus(n);

    for(int i =0; i < n; i++)
    {
        int m;
        cin >> m;
        bus[i].resize(m);
        for(int j = 0; j < m; j++)
        {
            cin >> bus[i][j];
            stb[bus[i][j]].push_back(i);
        }
    }

    int s,t;
    cin >> s >> t;

    if(s == t) 
    {
        cout << 0;
        return 0;
    }

    queue<pair<int,int>> q;
    q.push({s,0});

    unordered_set<int> vs;
    vs.insert(s);

    vector<bool> vb(n, false);
    while(!q.empty()){
        auto [cs, tf] = q.front();
        q.pop();

        for(int b : stb[cs]){
            if(!vb[b])
            {
                vb[b] = true;

                for(int ns : bus[b])
                {
                    if(ns == t)
                    {
                        cout << tf +1 << '\n';
                        return 0;
                    }

                    if(vs.find(ns) == vs.end())
                    {
                        vs.insert(ns);
                        q.push({ns,tf+1});
                    }
                }
            }
        }
    }

    cout << "-1";
}