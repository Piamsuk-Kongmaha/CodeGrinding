#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	long long int price = 0;
	cin >> n;
	while (n >= 7) {n-=15;price+=3000;}
	while (n >= 4) {n-=5;price+=1500;}
	while (n >= 2) {n-=2;price+=800;}
	while (n >= 1) {n-=1;price+=500;}
	cout << price;
}
