#include<bits/stdc++.h>

using namespace std;

#define piii pair<int,pair<int,int>>

#define third second.second

#define sec second.first

int main(){
	
	priority_queue<piii,vector<piii>,greater<piii>> a;
	
	
	a.push({1,{2,3}});
	piii tq = a.top();
	cout << tq.first;
}
