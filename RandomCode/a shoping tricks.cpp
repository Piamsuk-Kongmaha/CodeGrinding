#include <iostream>

using namespace std;

int main()
{
	int a,b,c,pa,pb,pc,sum;
	
	cin >> a >> b >> c;
	
	pa = a/2;
	
	pb = b/2;
	
	pc = c/2;
	
	if(pa >= 1 && pb >= 1 && pc >= 1)
	{
		sum = (2 * (pa + pb + pc));
	}
	
	cout << (10*a) + (12 * b) + (10 * c) - ((4*(pa + pb + pc) + sum));
	
	
	
}
