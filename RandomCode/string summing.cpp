#include <bits/stdc++.h>

using namespace std;

int arrayq(string s1, string s2)
{
	
}

int main()
{
	string s1;
	
	string s2;
	
	cin >> s1;
	
	cin >> s2;
	
	string sum = "";
	int num = 0;
	while (s1.size() > s2.size()) s2 = "0" + s2;
	while (s1.size() < s2.size()) s1 = "0" + s1;
	for(int i = s1.size() - 1; i >= 0; i--)
	{
		num = (s1[i] - '0') + (s2[i] - '0') + num;
		sum = char((num%10)+ '0') + sum;
		num/= 10;
		cout << num ;
	}
	if (num == 1)
	{
		sum = '1' + sum;
	}
	cout << endl << s1 << endl;
	cout << s2 << endl;
	cout << sum;
	
}
