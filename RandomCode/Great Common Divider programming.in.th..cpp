#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a;
	int b; 
	int r,q;
	cin >> a >> b;
  	while (min(a,b) > 0){
    q = a/b;
    r = a-q*b;
    a = b;
    b = r;
	}
 cout << a;	
}


