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
		cout << array[i] << " ";
	}
}

int main()
{
	char h[10];
	int a[100];
	int k,len,c,q = 0;
	
	while (true)
	{
		cin >> a[k];
		
		
		if (a[k] == 0)
		{
			break;
		}
		k++;
	}
	cin >> h;
	len = k;
	
	if (h[1] == 'i')
	{
		sorti(a,len);
		printArray(a,len);
	} else if (h[1] == 'a')
	{
		sortu(a,len);
		printArray(a,len);
	}
	
	
}

