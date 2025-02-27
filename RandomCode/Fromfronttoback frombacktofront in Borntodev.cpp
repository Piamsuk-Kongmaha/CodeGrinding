#include <bits/stdc++.h>

using namespace std;

void reverse(int cat[], int length)
{
	int middle = length / 2;
	int temp;
	for (int i = 0 ; i < middle; i++)
	{
		temp  = cat[i];
		cat[i] = cat[length - i - 1];
		cat[length - i - 1] = temp;
	}
}



void printArray (int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}


int main()
{
	int n;
	cin >> n;
	int a[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	reverse(a,n);
	printArray(a,n);
	
	return 0;
}

