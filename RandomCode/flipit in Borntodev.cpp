#include <bits/stdC++.h>

using namespace std;

void reverse(char *cat)
{
	int length = strlen(cat);
	int middle = length / 2;
	char temp;
	for (int i = 0 ; i < middle; i++)
	{
		temp  = cat[i];
		cat[i] = cat[length - i - 1];
		cat[length - i - 1] = temp;
	}
}

int main()
{
	char c[100];
	cin >> c;
	
	reverse(c);
	
	cout << c;
}

