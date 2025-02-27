#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[] = {1,0,5,8,2,7,3,5,2,9};
	int s = sizeof(a)/sizeof(a[0]);
	int count = 0;
	
	for (int i = 0; i <= s - 1; i++)
	{
		for (int j =0; j <= s-1; j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}	
	
	
	// find sum of 2 array = x; x=10 1+9, 2+8, 3+7, 5+5 cout = 4
	// 0,1,2,2,3,5,5,7,8,9
	//l=0
	
	int x,l=0;
	cin >> x;
	s--;
	while (l < s)
	{
		if (a[l]+a[s] == x)
		{
			count++;
			cout << a[l++] << " "<< a[s--] << '\n';
		} else if (a[l]+a[s] < x)
		{
			l++;
		} else 
		{
			s--;
		}
	}
	
	
	cout << "times it repeated" << " "<< count;
	return 0;
}
