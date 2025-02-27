#include <bits/stdc++.h>

using namespace std;

		
	
	
int main()
{
	int a = 1 ;
	int b = 0;
	int c = 0;
	int temp = 0;
	char msg[50];
	cin >> msg;
	
	for(int i = 0 ; i < 50; i++)
	{
		if (msg[i] == 'A')
		{
			temp = a;
			a = b;
			b = temp;
		}
		else if (msg[i] == 'B')
		{
			temp = b;
			b = c;
			c = temp;
		}
		else if (msg[i] == 'C')
		{
			temp = a;
			a = c;
			c = temp;
		}
	}
	
	if (a == 1) cout << 1;
	else if (b == 1) cout << 2;
	else cout << 3;
}
