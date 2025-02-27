#include <iostream>

using namespace std;

int main()
{
	unsigned short a, b, c, d;
	unsigned int amount;
	
	cin >> a >>b >> c >>d;
	
	amount = a*30;
	
	if (a >= b)
	{
		amount += b*7;
		
		a-=b;
	} else
	{
		amount += (b - a) * 12 + a * 7;
	}
	if (a >= d)
	{
		amount += d*7;
		
		a-=d;
	} else
	{
		amount += (d - a) * 11 + a * 7;
	}
	if (a >= c)
	{
		amount += c*7;
		
	} else
	{
		amount += (c - a) * 10 + (a * 7);
	}
	
	cout << amount;
}
