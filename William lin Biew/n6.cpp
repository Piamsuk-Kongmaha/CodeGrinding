#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0)->sync_with_stdio(false);
    int n,q,a,b;
    cin >> n >> q >> a >> b;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    } 
    sort(arr,arr+n);
    multiset<int> s0,s1,s2;
    for(int i=0; i<a-1; i++){
        s0.insert(arr[i]);
    } 
    for(int i=a-1; i<b-1; i++){
        s1.insert(arr[i]);
    } 
    for(int i=b-1; i<n; i++){
        s2.insert(arr[i]);
    } 
    while(q--){
        int x=*s1.begin(),y=*s2.begin();
        s1.erase(s1.begin()); s2.erase(s2.begin());
        s0.insert(y-x);
        auto it=s0.end(); it--;
        s1.insert(*it);
        s0.erase(it);
        s0.insert((x+y)/2);
        it=s0.end(); it--;
        s1.insert(*it);
        s0.erase(it);
        it=s1.end(); it--;
        s2.insert(*it);
        s1.erase(it);
    }
    for(auto x: s0) cout << x << ' ';
    for(auto x: s1) cout << x << ' ';
    for(auto x: s2) cout << x << ' ';
    return 0;
}

