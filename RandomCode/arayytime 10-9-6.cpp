#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n[5] = { },i;
	double x[] = {10,4.5,8,3,5,15,30};
	
	int size = sizeof(x)/sizeof(x[0]);
	double sum = 0;
	
	double max = x[0];
	double min = x[0];
	
	for (i = 0; i<size;i++)
	{ 
		cout << "x["<<i<<"] ="<<x[i]<<'\n';
		sum += x[i];
		
		if (max < x[i])
		{
			max = x[i];
		}
		if (min > x[i])
		{
			min = x[i];
		}
	}
	
	cout << "sum = " << sum << '\n';
	cout << "Avg = " << sum/size << '\n';
	cout << "max = "<< max << '\n'<< "min = " << min << '\n';
}
