#include <bits/stdc++.h>

using namespace std;

int a,i,v,x,l,c;

int main()
{
	cin >> a;
	for(int j = a; j > 0; j--)
	{
		int n = j;
		while (n > 0)
		{
			if (n >= 100){
				c++;
				n-=100;
			}else if (n >= 90)
			{
				c++;
				x++;
				n-=90;
			}else if (n >= 50)
			{
				l++;
				n-=50;
			}else if (n >= 40)
			{
				l++;
				x++;
				n-=40;
			}else if (n >= 10)
			{
				x++;
				n-=10;
			}else if (n >= 9)
			{
				x++;
				i++;
				n-=9;
			}else if (n >= 5)
			{
				v++;
				n-=5;
			}else if (n >= 4)
			{
				v++;
				i++;
				n-=4;
			}else
			{
				i++;
				n-=1;
			}	
		}
	}
	cout << i << " " << v << " " << x << " " << l << " "<< c;
	return 0;
}
