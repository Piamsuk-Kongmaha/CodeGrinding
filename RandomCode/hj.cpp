#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	float q , max = 0;
	int x[n],y[n];
	for(int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}
	
	
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			for(int k = j+1; k < n; k++)
			{
				q = abs(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i])/2.0;
				
				if (max < q)
				{
					max = q;
				}
			}	
		}
	}
	
	cout << fixed << setprecision(3) << max;
}
