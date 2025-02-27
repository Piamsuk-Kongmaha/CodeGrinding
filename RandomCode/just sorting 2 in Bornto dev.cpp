#include <bits/stdc++.h>

using namespace std;

void sortu (int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j< size - 1; j++)
		{
			if(array[j] < array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
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
	
	for (int i = 0; i < n ; i++)
	{
		cin >> a[i];
	}
	
	sortu (a,n);
	printArray (a,n);
	
	return 0;
}
