#include <bits/stdc++.h>

using namespace std;

int main()
{
	string q1,q,q2;
	
	cin >> q1;
	
	q = q1;
	
	for (int i =0; i < q.size(); i++)
	{
		q[i] = toupper(q[i]);
	}
	
	q2 = q;
	
	reverse(q2.begin(), q2.end());
	
	if (q2 == q)
	{
		string q3,q4;
		q3 = q.substr(0,q1.size()/2);
		q4 = q3;
		reverse(q3.begin(), q3.end());
		if (q4 == q3)
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
