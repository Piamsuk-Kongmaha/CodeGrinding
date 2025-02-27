#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	getline(cin, a);
	
	for (int i =0; i < a.size(); i++)
	{
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' )
		{
			i = i+2;
		}
		
		cout << a[i];
	}
	
}
