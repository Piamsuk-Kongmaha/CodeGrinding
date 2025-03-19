#include <bits/stdc++.h>

using namespace std;

int calculate(int a, int operation, int b)
{
	int percent;
	if(operation == 1) percent = 4;
	else if (operation == 2) percent = 8;
	else percent = 16;

	return (a+b) + ((a+b) * percent) / 100;
}

int think (stack<int> &number, int operation)
{
	int b = number.top(); number.pop();
	int a = number.top(); number.pop();
	number.push(calculate(a,operation,b));
	return calculate(a,operation,b);
}

int main()
{
	string s;
	cin >> s;
	stack<int> number;
	stack<int> operation;

	for(int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		if(c >= 'A' && c <= 'Z') number.push(20);
		else if (c == '[') operation.push(0);
		else if (c == ']'){
			int ans;
			while(!operation.empty() && operation.top()!= 0){
				ans = think(number,operation.top());
				operation.pop();
			}
			operation.pop();
		}else{
			int new_operation = c-'0';
			int ans;
			while(!operation.empty() && operation.top() >= new_operation)
			{
				ans = think(number,operation.top());
				operation.pop();
			}
			operation.push(new_operation);
		}
	}

	int ans = number.top();

	while(!operation.empty()){
		ans = think(number,operation.top());
		operation.pop();
	}

	cout << ans;
}