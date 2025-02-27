 #include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	
	for(int i = 1; i<= a; i++)
	{
		if(a%i != 0)continue;
		for(int j = -abs(c); j <= abs(c); j++)
		{
			if (j == 0 || c % j != 0) continue;
			
			if (i*c / j+j * a / i == b)
			{
				cout << i << " " << j << " " << a/i	 << " " << c/j;
				return 0;
			}	
		}	
	}
	cout << "No Solution"
}
