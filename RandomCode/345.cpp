#include<iostream>
using namespace std;

int main(){
	int N,mid;
	cin>>N;
	mid=N/2+N%2;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N-(N+1)%2;j++){
			if(i+j==mid+1||j-i==mid-1||i-j==mid-N%2||i+j==3*mid-N%2){
				cout<<"*";
			}
			else{
				cout<<"-";		
			}	
		}
		cout<<endl;
	}
}
