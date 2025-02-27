#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	int n;
	cin >> n;
	int temp;
	while (n--)
	{
		int up = 1,front = 2, left = 3,back =5, right = 4,down = 6;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if(s[i] == 'F')
			{
				temp = front;
				front = up;
				up = back;
				back = down;
				down = temp;
			}
			if(s[i] == 'B')
			{
				temp = front;
				front = down;
				down = back;
				back = up;
				up = temp;
			}
			if(s[i] == 'L')
			{
				temp = left;
				left = up;
				up = right;
				right = down;
				down = temp;
			}
			if(s[i] == 'R')
			{
				temp = left;
				left = down;
				down = right;
				right = up;
				up = temp;
			}
			if(s[i] == 'C')
			{
				temp = front;
				front = right;
				right = back;
				back = left;
				left = temp;
			}
			if(s[i] == 'D')
			{
				temp = front;
				front = left;
				left = back;
				back = right;
				right = temp;
			}
			
		}
		cout << front << endl;
	}
}
