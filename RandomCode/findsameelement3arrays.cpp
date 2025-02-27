#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i1,i2,i3 = 0;
	
	int a[] = {1,5,3,7,2,9,2,4};
	int b[] = {3,5,1,6,2,8,2,4,10};
	int c[] = {4,2,1,5,2,8,2,6,9,6,7};
	
	int s1 = sizeof(a)/sizeof(a[0]);
	int s2 = sizeof(b)/sizeof(b[0]);
	int s3 = sizeof(c)/sizeof(c[0]);
	
	sort(a,a+s1);
	sort(b,b+s2);
	sort(c,c+s3);
	
	while (i1 < s1 && i2 < s2 && i3 < s3)
	{
		if (a[i1] == b[i2] && b[i2] == c[i3])
		{
		cout << a[i1] << " ";
		i1++;
		i2++;
		i3++;
	 } else if (a[i1] < b[i2])
	 {
	 	i1++;
	 } else if (b[i2] < c[i3])
	 {
	 	i2++;
	 }else
	 {
	 	i3++;
	 }
}

}
