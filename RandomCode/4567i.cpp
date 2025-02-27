#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m,n,check,i;
	
	cin >> n >> m;
	
	int baned[m],num[m];
	
	for ( i = 0; i< m; i++)
	{
		cin >> baned[i];
	}
	for (int i =1; i<= n; i++)
	{
		num[i-1] = i;
	}	
	
	do{
		check = 1;
		for (int i = 0; i<m; i++)
		{
			if (num[0] == baned[i])
			{
				check = 0;
			}
		}
		if (check == 0)
		{
			continue;
		}
		
		for (int i = 0; i<n; i++)
		{
			cout << num[i] << " ";
		}
		cout << '\n';
	}while (next_permutation(num,num+n));

}
