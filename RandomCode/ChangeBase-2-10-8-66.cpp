#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void cbn(int n, int b)
{
	string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string temp = " ";
	while (n!=0){
		temp = str[n%b] + temp;
		n/=b;
	}
	cout << temp;
}

int main()
{
	int n,b;
	cin >> n >>b;
	cbn(n,b);
}
