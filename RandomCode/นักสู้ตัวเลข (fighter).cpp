
#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> fS;
	int p , temp, ecc = 0, occ = 0;
	cin >> p;
	
	int hpe = p, hpo = p;
	
	for(int i = 0 ; i < 2*p ;i++)
	{
		cin >> temp;
		fS.push_back(temp);
	}
	
	for(int i = 0; i < 2*p; i++)
	{
		if(fS[i] % 2 == 0)
		{
			ecc++;
			occ = 0;
			if (ecc >= 3)
			{
				hpo -= 3;
			}
			else
			{
				hpo -= 1;
			}
		}else
		{
			ecc = 0;
			occ++;
			if (occ >= 3)
			{
				hpe -= 3;
			}
			else
			{
				hpe -= 1;
			}
		}
		if (hpo <= 0 )
		{
			cout << 0 << "\n" << fS[i];
			return 0;
		}
		
		if (hpe <= 0)
		{
			cout << 1 << '\n' << fS[i];
			return 0;
		}
		
	}
	return 0;
	
}
