
#include<bits/stdc++.h>
using namespace std;
using pii=pair<long long int,char>;
pii a[10];
bool b[10];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	for(int i=0;i<7;i++){
		a[i].second='A'+i;
	}
	int sum=0;
	for(int o=1; ;o++){
		string s;
		cin >> s;
		if(s=="!") break;
		for(int i=0;i<s.size();i++){
			a[s[i]-'A'].first++;
			if(b[s[i]-'A']==false){
				b[s[i]-'A']=true;
				sum++;
			}			
		}
		int mn=INT_MAX,t,cnt=0;
		for(int i=0;i<7;i++){
			if(a[i].first==INT_MAX) continue;
			if(a[i].first<mn){
				mn=a[i].first;
				t=i;
				cnt=1;
			}
			else if(a[i].first==mn){
				cnt++;
			} 
		}
		if(sum<=1) continue;
		if(cnt==1){
			a[t].first=INT_MAX;
			sum--;
		}
	}
	for(int i=0;i<7;i++){
		a[i].second='Z'-a[i].second;
	}
	sort(a,a+7,greater<pii>());
//	cout << sum << "\n";
	int ans=0;
	for(int i=0;i<7;i++){
		if(a[i].first<INT_MAX && a[i].first!=0){
//			cout << char('Z'-a[i].second) << ' ' << a[i].first << "\n";
			ans++;
		}
	}
	cout << ans << "\n";
	for(int i=0;i<7;i++){
		if(a[i].first<INT_MAX && a[i].first!=0){
			cout << char('Z'-a[i].second) << ' ' << a[i].first << "\n";
//			ans++;
		}
	}	
}
