#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,p;
	cin >> n >>p;
	float s=clock();
	char ar[n];
	for(int i = 0; i <n ; i++)
	{
		ar[i] = (char)i+65;
	}
	
	if(n==3)
	{
		ar[2] = 'D';
	}
	sort(ar,ar+n);
	do{
		if (ar[p-1] == 'D' && (strstr(ar,"AB") || strstr(ar,"BA")))
		{
			cout << ar << '\n';
		}
	}
	while(next_permutation(ar,ar+n));
	float e=clock();
	cout << fixed << setprecision(6) << (e-s)/CLOCKS_PER_SEC;
}
