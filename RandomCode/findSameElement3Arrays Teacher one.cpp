#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int a[] = {1,5,3,7,2,9,2,4};
	int b[] = {3,5,1,6,2,8,2,4,10};
	int c[] = {4,2,1,5,2,8,2,6,9,6,7};
	
	int i1 = sizeof(a)/sizeof(a[0]-1);
	int i2 = sizeof(b)/sizeof(b[0])-1;
	int i3 = sizeof(c)/sizeof(c[0])-1;
	
	sort(a,a+i1+1);
	sort(b,b+2+1);
	sort(c,c+s3+1);
	
	while (i1 >= 0 && i2 >= 0 && i2 >= 0)
	{
		if (a[i1] == b[i2] && b[i2] == c[i3])
		{
		cout << a[i1] << " ";
		i1--;
		i2--;
		i3--;
	 } else if (a[i1] > b[i2])
	 {
	 	i1--;
	 } else if (b[i2] > c[i3])
	 {
	 	i2--;
	 }else
	 {
	 	i3--;
	 }
}

}
