#include <bits/stdc++.h> 
using namespace std;

int meow(int a)
{
	if (a == 1)
	{
		cout << a << endl;
		return 0;
	}
	meow(a-1);
	cout << a << endl;
	 meow(a-1); 
}

int main()
{
	meow(5);
}
