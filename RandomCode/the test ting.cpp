#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i;
	cin >> i;
	int num[i];
	for (int m = 0; m < i; m++)
	{
		cin >> num[m];
	}
	int max = num[0], min = num[0];
	for (int n = 1;n < i; n++)
	{
		if (num[n] > max)
		{
			max  = num[n];
		}
		else if (num[n] < min)
		{
			min = num[n];
		}
		
	}
	cout << min << endl;
	cout << max << endl;
	
	return 0;
	
}
