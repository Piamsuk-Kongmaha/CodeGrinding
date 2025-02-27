#include<bits/stdc++.h>
using namespace std;
int main(){
	int D,M;
	cin >> D >> M;
	int dinm[12] = {31,29,31,30,31,30,31,31,30,31,30,31},sum = 1+D;
	string daynames[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday","Sunday"};
	for(int i = 0;i < M-1;i++){
		sum += dinm[i];
	}
	cout << sum;
	cout << daynames[(sum-1)%7];
	return 0;
}
