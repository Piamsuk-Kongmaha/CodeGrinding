#include <bits/stdc++.h>

using namespace std;

char Centre(char a, char b, char c)
{
	char arr[] = {a,b,c};
	sort(arr, arr+3);
	return arr[1];
}

int main()
{
	int l,k;
	cin >> l >> k;
	
	string m1, m2, key;
	
	cin >> m1 >> m2 >> key;
	
	for(int i = k-1; i >= 0; i--)
	{
		for(int j = 0; j < l; j++)
		{
			char t1 = m1[j], t2 = m2[j];
			key[i] = Centre(key[i], t1, t2);
		}
	}
	
	cout << key;
	
	return 0;
}
