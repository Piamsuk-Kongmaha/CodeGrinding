#include <bits/stdc++.h>

using namespace std;

void sorti(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j< size - 1; j++)
		{
			if(array[j] > array[j+1])
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
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
	
	sorti(a,n);
	
	for(int j = 0; j < (1 << n);j++)
	{
		for (int k = 0; k < n; k++)
		{
			if (j & (1<<k))
			{
				cout << a[k];
			}
			
		} cout << endl;
	}
}
