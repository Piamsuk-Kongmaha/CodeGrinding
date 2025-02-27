#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,c,temp;
	
	cin >> a >> b >> c;
	
	if(a > b)
	{
		if (a > c)
		{
			temp = a;
		
		}else
		{
			temp = c;
		}
	} else
	{
		if (b > c)
		{
			temp = b;
		} else
		{
			temp = c;
		}
	}
	
	cout << "MAX : " << temp;
}
