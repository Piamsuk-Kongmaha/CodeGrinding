#include <bits/stdc++.h>

using namespace std;
int x[100000];
int main()
{
	int a,b,c,count = 0;
	int sum = 0;
	cin >> a >> b >> c;
	
	
	while (a > 1) a/=2,count++;
	while (b > 1) b/=2,count++;
	while (c > 1) c/=2,count++;
	
	for (int i =0; i < 100000; i++)
	{
		sum = 0;
	}
	
	cout << count;
}
