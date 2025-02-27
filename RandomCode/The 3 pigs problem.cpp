/*

1. ABC - if(A>=B && B>=C)
2. ACB - else if(A>=C && C>B)
3. BAC - else if(B>A && A>=C)
4. BCA - else if(B>=C && C>A)
5. CAB - else if(C>A && A>=B)
6. CBA - else


*/

#include <bits/stdc++.h>

using namespace std;

int main() 
{
	unsigned short A = 0, B = 0, C = 0 , n;
	for (int i = 1; i <= 9; i++)
	{
		cin >> n;
		if (i%10 == 1 || i%10 == 4 || i%10 == 7) A+=n;
		else if (i%10 == 2 || i%10 == 5 || i%10 == 8) B+=n;
		else C+=n;
	}
	
	//cout << A << " " << B << " " << C << endl;
	
	if(A>=B && B>=C) cout << "ABC";
	else if(A>=C && C>B) cout << "ACB";
	else if(B>A && A>=C) cout << "BAC";
	else if(B>=C && C>A) cout << "BCA"; 
	else if(C>A && A>=B) cout << "CAB";
	else cout << "CBA";
}
