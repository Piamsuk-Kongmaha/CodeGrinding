#include <iostream>

using namespace std;

int main()
{
	int a = 2,b = 1,s = 1,sum = 4,y, i;
	
	while (true)
	{
		cin >> y;
		i = y;
		
		if (i < 1)
	{
		break;
	} 
	if(i >= 1)
	{
		for (int j = 2;j <= i;j++)
		{
			a = b + s + a;
			s = a - (b+s);
			sum = a + b + s;
		}
	}
	cout << a << " " ;
	cout << sum << endl;
		
		a = 2,b = 1,s = 1,sum = 4;
	}
	
	
	
}
