#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	int Newstart = 0, start = 0, end = 0, curr=arr[0], mx=arr[0];
	
	for(int i =1; i < n; i++)
	{
		if (arr[i] + curr<arr[i])
		{
			curr = arr[i];
			Newstart = i;
		}else
		{
			curr = curr + arr[i];
		}
		
		if (mx < curr)
		{
			mx = curr;
			start = Newstart;
			end = i;
		}
	}
	
	if(mx<=0)
	{
		cout << "Empty sequence";
		return 0;
	}
	
	for(int i = start; i <= end; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl << mx << endl;
	
	return 0;

}
