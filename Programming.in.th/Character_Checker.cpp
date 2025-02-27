#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s;
	int cl =0 ,sl =0,m =0;
	
	cin >> s;
	
	for(int i =0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z') cl++;
		if (s[i] >= 'a' && s[i] <= 'z') sl++;
	}
	
	if(cl > 0 && sl == 0) cout << "All Capital Letter";
	else if (sl > 0 && cl == 0) cout << "All Small Letter";
	else cout << "Mix"; 
	return 0;
	
}
