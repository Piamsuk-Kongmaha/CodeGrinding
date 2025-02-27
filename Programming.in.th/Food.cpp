#include <bits/stdc++.h>

using namespace std;
int n,m,ban[10];

int main()
{
	
	
	cin >> n >> m;
	
	for(int i =0 ; i < m;i ++)
	{
		int x;
		cin >> x;
		ban[x]++;
	}
	vector<int> food(n);
	iota(food.begin(), food.end(), 1);
	
	do{
		if(ban[food[0]])
		{
			continue;
		}else for(int i = 0; i < n; i++) cout << food[i] << ' ';
		cout << '\n';
	}while(next_permutation(food.begin(), food.end()));
	
	
}
