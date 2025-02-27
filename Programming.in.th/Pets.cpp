#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c, maxsum = 0;
	for(int i = 0; i < 5; i++)
	{
		int sum = 0;
		int temp;
		for(int i = 0 ; i < 4; i++)
		{
			cin >> temp;
			sum+=temp;
		}
		if(sum > maxsum)
		{
			maxsum = max(maxsum, sum);
			c = i;
	    }
	}
	
	cout << c+1 << ' ' << maxsum;
	
}
