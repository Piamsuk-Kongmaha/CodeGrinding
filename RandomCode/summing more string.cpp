#include <bits/stdc++.h>

using namespace std;


int main()
{
	string s1;
	bool leadingone = false;
	string s2;
	string carry = "";
	string y;
	string h;
	
	cin >> s1;
	
	cin >> s2;
	
	h = s1;
	y = s2;
	
	string sum = "";
	int num = 0;
	while (s1.size() > s2.size()) s2 = "0" + s2;
	while (s1.size() < s2.size()) s1 = "0" + s1;
	while (h.size() > y.size()) y = " " + y;
	while (h.size() < y.size()) h = " " + h;
	
	for(int i = s1.size() - 1; i >= 0; i--)
	{
		num = (s1[i] - '0') + (s2[i] - '0') + num;
		sum = char((num%10)+ '0') + sum;
		num/= 10;
		if (num == 1)
		{
			carry[i-1] = '1';	
		}
		
	}
	if (num == 1)
	{
	
		sum = '1' + sum;
		leadingone = true;
	}
	
	for (int i = 0; i <= s1.size(); i++ )
	{	
		if (carry[i] == '1')
		{
			cout << "1" ;
		}else
		{
			cout << " ";
		}
	}
	
	
	cout << endl << h << endl;
	
	cout << y << endl;
	
	cout << sum;
	
	
	
}
