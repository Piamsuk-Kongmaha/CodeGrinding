#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<string> w;
	for(int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		w.push_back(temp);
	}
	
	sort(w.begin(), w.end());
	
	for(int i =0; i < n; i++)
	{
		if(w[i].compare(w[i-1]) == 0) continue;
		cout << w[i] << '\n';
	}
}
