#include <bits/stdc++.h>

using namespace std;

int main()
{
    float s = clock();
    vector<int> v1;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i =0; i < 1000000; i++)
    {
        v1.push_back(i);
    }
    for(int &n:v1)
    {
        cout << n << '\n';
    }
	float e = clock();
	cout << fixed << setprecision(6) << (e-s)/CLOCKS_PER_SEC;
}