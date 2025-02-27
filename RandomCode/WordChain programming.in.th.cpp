#include <bits/stdc++.h>
using namespace std;

const int INF = 1e8;
const int MOD = 1e9+7;
using ll = long long;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    int l,n;
    cin >> l >> n;

    string old,temp;
    cin >> old;
    for(int i=0; i<n-1; i++){
        cin >> temp;
        int c=0;
        for(int j=0; j<l; j++){
            if(old[j]!=temp[j])c++;
            if(c>2){
                cout << old;
                return 0;
            }
        }
        old = temp;
    }

    cout << old;

    return 0;
}
