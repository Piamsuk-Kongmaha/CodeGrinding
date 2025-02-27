#include<bits/stdc++.h>
using namespace std;


int rob(vector<int>& house)
{
	int sz = house.size();
	if(sz<3)
	{
		return *max_element(house.begin(), house.end());
	}else
	{
		vector<int> money (sz,0);
		money[0] = house[0];
		money[1] = house[1];
		money[2] = house[2] + house[0];
		for(int i = 3 ; i < sz; i++)
		{
			money[i] = max(house[i] + money[i-2], house[i]+ money[i-3]);
		}
		return *max_element(money.begin(), money.end());
	}
}

int main()
{
	vector<int> h = {5,3,4,11,2};
	cout << rob(h);
}
