#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,ca = 0,cb = 0,cg = 0;
	cin >> n;
	string s;
	cin >> s;
	
	string a = "ABC";
	string b = "BABC";
	string c = "CCAABB";
	
	for(int i =0; i < n; i++)
	{
		if (s[i] == a[i%3]) ca++;
		if (s[i] == b[i%4]) cb++;
		if (s[i] == c[i%6]) cg++;
	}
	
	int maxh = max(ca,cb);
	maxh = max(maxh,cg);
	
	cout << maxh << '\n';
	
	if(ca == maxh) cout << "Adrian \n" ;
	if(cb == maxh) cout << "Bruno \n" ;
	if(cg == maxh) cout << "Goran \n" ;
	
	return 0;
	
	
}
