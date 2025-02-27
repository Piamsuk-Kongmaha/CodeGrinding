#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s1,s2,s3;
	
	cin >> s1;
	
	s2 = s1;
	
	for(int i = 0; i < s2.size(); i++)
	{
		s2[i] = toupper(s2[i]);
	}
	
	s3 = s2;
	
	reverse(s3.begin(),s3.end());
	
	if(s2 == s3)
	{
		string s4,s5;
		s4 = s2.substr(0,s1.size()/2);
		s5 = s4;
		reverse(s5.begin(),s5.end());
		if (s4 == s5)
		{
			cout << "Double Palindrome";
		}else
		{
			cout << "Palindrome";
		}
	}else
	{
		cout << "No";
	}
}
