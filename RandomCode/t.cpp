#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[] = {1,0,5,5,8,2,7,3,5,2,9,9,9};
	int q[100] = {0};
	int s = sizeof(a)/sizeof(a[0]);
	int i,max,count = 0;
	int x[100] = {0};
	sort(a,a+s);
	
	for ( i=0;i < s; i++)
	{
		q[a[i]]++;
		x[i] = q[a[i]];
			
	}
	
	for ( i=0;i < s; i++)
	{
		if (max < q[i])
		{
			max = q[i];
		}
		if (q[i] >= 2)
		{
			count++;
			cout << i << '\n';
		}
		
	}
	
	cout << "count = "<< count << '\n';
	cout << "max = " << max << ":";
	
	
	for ( i=0;i < s; i++)
	{
		if (q[i] == max)
		{
			cout << i << " ";
		}
	}
}
		
