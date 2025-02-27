#include <bits/stdc++.h>
#include <string.h>

using namespace std;

void cbn(int n, int b)
{
	string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string temp = " ";
	char a[20] = " ";
	int i = 0;
	
	while (n!=0)
	{
		a[i] = str[n%b];
		n/=b;
		i++;
		
	}
	for (int i = strlen(a) - 1; i >= 0; i--)
	{
			cout << a[i];
	}
}

int main()
{
	int n,b;
	cin >> n >>b;
	cbn(n,b);
}
