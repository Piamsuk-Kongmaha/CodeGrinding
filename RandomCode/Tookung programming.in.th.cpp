#include <bits/stdc++.h>
using namespace std;
bool checkeach(string a, string b){
	int minsize;
	if(a.size() < b.size()){
		minsize = a.size();
	}else{
		minsize = b.size();
	}
	for(int i = 0;i < minsize;i++){
		if(a[i]-'0' < b[i]-'0'){
			return true;
		}else if(a[i]-'0' > b[i]-'0'){
			return false;
		}
	}
	if(a.size() < b.size()){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n;
	cin >> n;
	string a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	vector<string> str;
	bool found;
	for(int i = 0;i < n;i++){
		found = false;
		for(int j = 0;j < str.size();j++){
			if(a[i] == str[j]){
				found = true;
				break;
			}
		}
		if(!found){
			str.push_back(a[i]);
		}
	}
	sort(str.begin(), str.end(), checkeach);
	for(int i = 0;i < str.size();i++){
		cout << str[i] << '\n';
	}
	return 0;
}
