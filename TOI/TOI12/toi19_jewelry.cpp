#include<bits/stdc++.h>

using namespace std;

char s[1000010];
vector<int> q;
stack<int> stk;
long long int ans;
long long c;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> s[i];
    stk.emplace(0);
    for(int i = 1; i <= n; i++){
        if(s[i] == 'T'){
            c += (long long )(i - stk.top());
            if(stk.top() != 0)stk.pop();
            q.emplace_back(i);
        }else{
            for(auto itr : q) stk.emplace(itr);
            q.clear();
        }
        ans += c;
    }
    cout << ans;
}