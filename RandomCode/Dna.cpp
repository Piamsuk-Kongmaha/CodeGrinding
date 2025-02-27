#include <bits/stdc++.h>

using namespace std;

string q[300][300];

int main()
{
	string a,b;
	cin >> a >> b;
	string final = "";
	
	for (int i =0 ; i <= a.length(); i++)
	{
		for (int j =0; j <= b.length(); j++)
		{
			if (i== 0 || j==0 )
			{
				q[i][j] == "";
			}else if (a[i-1] == b[j-1])
			{
				q[i][j] = q[i-1][j-1] + a[i-1];
				if (q[i][j].length() > final.length())
				{
					final = q[i][j];
				}
			}else
			{
				q[i][j] = "";
			}
		}
		
		
	}
	cout << final;
}
