#include <bits/stdc++.h>

using namespace std;

int calculator(int n, int a, int b)
{
	int j = 0;
	switch(n)
	{
		case 1:
			j = a+b;
			break;
		case 2:
			j = a-b;
			break;
		case 3:
			j = a*b;
			break;
		case 4:
			j = a/b;
			break;
	}
	
	return j;
}
	

int main()
{
	int n,b,a;
	char ex[4] = {'+','-','*','/'};
	
	cout << "calculator" <<'\n'
		 << "1. addition" << '\n'
		 << "2. substract" << '\n'
		 << "3. multiplication" << '\n'
		 << "4. divide" << '\n'
		 << "5. Exit" << '\n'
		 << "choice menu ";
	cin >> n;
	
	
	
	if (n < 5)
	{
		cout << "Number 1 :  ";
		cin >> a;
		cout << "Number 2 : ";
		cin >> b;
		cout <<a << ex[n-1] << b << " = " << calculator(n,a,b);
	}else
	{
		return 0;
	}
	
}
	
