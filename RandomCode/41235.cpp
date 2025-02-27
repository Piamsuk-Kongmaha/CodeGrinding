#include <bits/stdc++.h>


using namespace std;

int main()
{
	int a,b, loop = 0;
	cin >> a>> b;
	
	int p = sqrt(a);
	if(p*p<a)
	{
		p++;
	}
	
	for (double i = p; i <= sqrt(b); i++)
	{
		cout << i*i << " ";
		loop++;
	}
	cout << "\nloop= " << loop;
}
