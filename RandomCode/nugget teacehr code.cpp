#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n<6)
	{
		cout << "no";
		return 0;
	}
	
	for (int i=6; i<= n; i++)
	{
		for(int x=0; x <= i; x=x+20)
		{
			for(int y =0; y <= i; y+=9)
			{
				for (int z = 0; z <= i; z+=6)
				{
					if (x+y+z==i)
					{
						cout << i << '\n';
						goto jump;
					}
				}
			}
		}
		jump: cout <<"";
	}
}
