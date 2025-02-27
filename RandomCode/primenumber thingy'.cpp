/*
TASK: fundamental
LANG: C++
AUTHOR : Piamsuk Kongmaha
CENTER: SUT
*/


#include <iostream>

using namespace std;

int main()
{
	long t,n;
	cin >> t;
	for (int i = 1; i <= t ;i++)
	{
		int count = 0;
		cin >> n;
		while (n%2 == 0)
	{
		count++;
		n/=2;
	}
	
		for(int i=3; i <= n/i; i +=2)
		{	
		while (n%i == 0)
		{
			count++;
			n/=i;
		}
		}
		
		cout << count+1 << '\n';
	}
	
}
