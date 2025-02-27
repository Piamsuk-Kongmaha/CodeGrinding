#include <bits/stdc++.h>

using namespace std;

int counts(char* n)
{
	int count = 0;
	int len = strlen(n);
	for(int i = 0; i < len; i++  )
	{
		if (n[i] != ' ')
		{
			count++;
		}
	}
	
	return count;
}
	

int main()
{
	char s[100];
	cin.getline(s,sizeof(s));
	
	cout << counts(s);
	
	
}
	
