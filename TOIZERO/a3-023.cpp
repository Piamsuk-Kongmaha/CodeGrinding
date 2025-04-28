#include <bits/stdc++.h>
using namespace std;
using ll=long long int;
#define twod array<ll,2>
bool p[15009];
vector<int> prime;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  int u,v;cin >> u >> v;
  for(int i=2;i*i<=15000;i++){
    if(p[i]==0){
      for(int j=i*2;j<=15000;j+=i) p[j]=1;
    }
  }
  if(u*3<=2) prime.push_back(2);
  for(int i=u*3;i<=v*3;i++) if(p[i]==0) prime.push_back(i);
  ll ans=0;
  for(auto e:prime){
    for(int i=u;i<=v;i++){
      int targ=e-3*i;
      int r=v-i;
      if(targ<0) break;
      int k=min(r-(targ-r),targ)+1;
      if(k<0) continue;
      ans+=(k+1)/2;
    }
  }
  cout << ans;
  return 0;
}