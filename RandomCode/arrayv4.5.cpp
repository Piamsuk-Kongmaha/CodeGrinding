#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[] = {1,0,5,5,8,2,7,3,5,2,9,9,9};
	int s = sizeof(a)/sizeof(a[0]);
	int q[100] = { };
	int max,count = 0;
	sort(a,a+s);
	q[0] = 1;	
	for (int i = 1; i <= s ;i++)
	{
		if (a[i] == a[i-1])
		{
			q[i] = q[i-1] + 1;
			q[i-1] = 0;
		} else
		{
			q[i] = 1;
		}
		
		if (max < q[i])
		{
			max = q[i];
		}
		
	}
	
	for (int i =0; i <= s ;i++)
	{
		
		if (q[i] >= 2)
		{
			count++;
			cout << a[i] << '\n';
		}
	}
	cout << "count = "<< count << '\n';
	cout << "max = " << max << ":";
	
		for ( int i=0;i < s; i++)
	{
		if (q[i] == max)
		{
			cout << a[i] << " ";
		}
	}

}
