#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	double sum;
	
	if (a-b > 0)
	{
		cout << "-1" << endl;
		
		sum = ((a-b)*100)/a;
		
		cout << fixed << setprecision(2) << sum ;
		
	} else if (b - a > 0)
	{
		cout << "1" << endl;
		
		sum = ((b-a)*100)/a;
		
		cout <<fixed << setprecision(2) << sum ;
		
	} else
	{
		cout << "0";
	}
	
	return 0;
}
