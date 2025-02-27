#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d,m,sum;
	cin >> d >> m;
	if(m>=1)sum=0+d;
	if(m>=2)sum=31+sum;
	if(m>=3)sum=28+sum;
	if(m>=4)sum=31+sum;
	if(m>=5)sum=30+sum;
	if(m>=6)sum=31+sum;
	if(m>=7)sum=30+sum;
	if(m>=8)sum=31+sum;
	if(m>=9)sum=31+sum;
	if(m>=10)sum=30+sum;
	if(m>=11)sum=31+sum;
	if(m>=12)sum=30+sum;
	switch (sum%7)
	{
		case 1:
			cout << "Thursday";
			break;
		case 2:
			cout << "Friday";
			break;
		case 3:
			cout << "Saturday";
			break;
		case 4:
			cout << "Sunday";
			break;
		case 5:
			cout << "Monday";
			break;
		case 6:
			cout << "Tuesday";
			break;
		default:
			cout << "Wednesday";
			break;
	}
	return 0;
}
