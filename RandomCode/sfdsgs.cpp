#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;
  
  for (int i = 1; i <= n+1; i++)
  {
  	for(int j = n-i; j > 0; j--)
  	{
  		cout << " ";
	}
	int val = 1;
	
	for (int j = 1; j <= i;j++)
	{
		cout << val << " ";
		
		val = val*(n-j)/j;
	}
	cout << endl;
  }
  
}   
