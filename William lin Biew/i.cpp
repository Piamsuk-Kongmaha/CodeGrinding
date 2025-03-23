#include <bits/stdc++.h>

using namespace std;


int think(int h, int m)
{
	if(h == 0  && m == 0) return 360;
	int angle = abs(30 * h - 6 * m);
	return max(angle, 360 - angle);
}

int main()
{
	int t;
	cin >> t;
	vector<pair<int , int>> check;
	while(t--)
	{
		int n;
		cin >> n;
		vector<pair<int , int>> angles;
		for(int i = 0; i < n; i++)
		{
			char ch;
			int h,m;
			cin >> h >> ch >> m;
			int angle = think(h%12, m);
			angles.push_back({angle, i+1});
		}

		int maxA = 0;
		for(const auto& pair : angles)
		{
			if(pair.first > maxA){
				maxA = pair.first;
			}
		}

		int mini = n+1;
		
		for(const auto& pair : angles)
		{
			if(pair.first == maxA && pair.second < mini){
				mini = pair.second;
			}
		}

		check.push_back({mini,maxA});

	}
	
	for(auto i : check)
	{
		cout << i.first << " " << i.second << "\n";
	}


}