#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int g[10];
	for(int i = 0;i < 10;i++){
		g[i] = 0;
	}
	for(int i = 0;i < n;i++){
		g[a[i]]++;
	}
	int min;
	for(int i = 1;i < 10;i++){
		if(g[i] > 0){
			min = i;
			break;
		}
	}
	cout << min;
	for(int i = 0;i < 10;i++){
		if(i != min){
			for(int j = 0;j < g[i];j++){
				cout << i;
			}
		}else{
			for(int j = 0;j < g[i]-1;j++){
				cout << i;
			}
		}
	}
	return 0;
}
