/*
TASK:banner 
LANG:C++
AUTHOR : Piamsuk Kongmaha
CENTER: SUT
*/


#include<bits/stdc++.h>
#include <unistd.h> 

using namespace std;

int main()
{
//	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int a,k,i,j,w,l;
	char c;
	cin >> c >> a >> w >>l;
	k = 2*a+1;
	
	char b[k][k];
	for(int i =0; i < k;i++)
	{
		for(int j =0; j < k; j++)
		{
			if(j >= a-i && j<=a+i && j >= i-a && j<=3*a-i)
			{
				b[i][j] = c;
			}else
			{
				b[i][j] = '.';
			}
		}
	}
	
	int p, it;
	for(int row =0; row < l+1; row++)
	{
		p = row%k;
		if(p >0) p = k-p;
		for(int i = 0;i <k; i++)
		{
			it = p;
			for(int j = 0; j < w; j++)
			{
				cout << b[i][it++];
				if (it==k)
				{
					it = 0;
				}
			}
			cout << '\n';
		}
		usleep(40000);
	}
	return 0;
	
}
