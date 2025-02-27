#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s,f;
	getline(cin , s);
	getline(cin , f);
	
	int n1 = s.size() -1;
	int n2 = f.size() -1;
	
	for(int i = 0; i <= n1-n2; i++)
	{
		int j = 0;
		while(j < n2 && s[i+j] == f[i])
		{
			j+=1;
		}
		if (j == n2)
		{
			cout << i << endl;
		}
	}
	return 0;
}
