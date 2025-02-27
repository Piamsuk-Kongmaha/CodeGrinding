#include<bits/stdc++.h>
#define f first
#define s second
#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
using namespace std;

int main()
{	
	string s;
	cin >> s;
	int len = s.size();
	int a,b = 0;
	for(int i = 0; i < len ; i++)
	{
		a = (a*10 + int(s[i]-'0'))%3;
		b = (b*10 + int(s[i]-'0'))%11;
	}

	cout << a << " " << b;
}