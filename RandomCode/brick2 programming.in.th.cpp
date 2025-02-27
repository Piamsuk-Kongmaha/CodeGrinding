#include <bits/stdc++.h>

using namespace std;
 
int c,d,s[20],b[20];
char x[20][20];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> c >> d;
	
	for(int i = 0; i < d ; i++)
	{
		s[i] = c;
	}
	
	for(int i = 0; i < c; i++)
	{
		for(int j = 0; j < d ;j++)
		{
			cin >> x[i][j];
			if (x[i][j] == 'O')
			{
				if (i<s[j]){
					s[j] = i;
				}
					
			}
		}
	}
	for(int i =0 ; i < d; i++)
	{
		cin >> b[i];
		if(b[i] > s[i])
		{
			b[i] = s[i];
		}
	}
	for(int j=0; j<d; j++)
	{
		for(int i=1 ; i<=b[j]; i++)
		{
			x[s[j] - i][j] = '#';
		}
	
	}
	for(int i = 0 ;i < c; i++)
	{
		for(int j =0; j < d; j++)
		{
			cout << x[i][j];
		}
		cout << '\n';
	}
}

