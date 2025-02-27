#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;
const lli mod = 1e9 + 7;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, count = 1;
    cin >> n;
    int indicies[n + 1];
    for(int i = 0; i < n; i++)
    {   
        int temp;
        cin >> temp;
        indicies[temp] = i;
    }
    for(int i = 1;i < n; i++)
    {
        if(indicies[i+1] < indicies[i]) count++;
    }
    cout << count;
	return 0;
}