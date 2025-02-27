#include <bits/stdc++.h>

using namespace std;


int main()
{
	int arr[] = { 1, 2, 3, 4, 5};
	sort(arr, arr + 3);
	
	do {
	cout << arr[0] << " " << arr[1] << endl;
	} while (next_permutation(arr, arr + 3));
	return 0;
}
