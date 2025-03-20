#include <bits/stdc++.h> 

using namespace std;
int n;
vector<int> v1;

int think(int idx, int sum1, int sum2){
    if(idx == n) return (abs(sum1 - sum2));

    return min(think(idx+1, sum1 + v1[idx],sum2 ), think(idx+1 , sum1, sum2+v1[idx])); 

}
int main()
{
    cin >> n;
    v1.assign(n,0);
    for(int i =0; i < n; i++) cin >> v1[i];
    cout << think(0,0,0);

}