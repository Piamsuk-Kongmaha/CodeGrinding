#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n  >> k;

    vector<int> v1(n), mt;
    for(int i = 0; i < n;i++) cin >> v1[i];
    for(int i = 0; i < n; i++){
        if((i == 0 && v1[i] > v1[i+1]) || (i == n-1 && v1[i] > v1[i-1]) || (v1[i] > v1[i-1] && v1[i] > v1[i+1]))
        {
            mt.push_back(v1[i]);
        }
    }

    sort(mt.begin() ,mt.end());
    mt.resize(unique(mt.begin(), mt.end()) - mt.begin());
    reverse(mt.begin(), mt.end());

    if(mt.size() == 0) cout << "-1";
    else if(mt.size() < k) {
        for(int i = mt.size() - 1; i >=0; i--) cout << mt[i] <<'\n';
    }
    else
    {
        for(int i = 0; i < k; i++) cout << mt[i] <<'\n';
    }

}