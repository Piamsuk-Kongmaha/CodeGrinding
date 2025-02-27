#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(ll X, ll N, ll* P)
{
    set<pair<int, int> > ranges;
    ranges.insert({ 0, X });
    multiset<ll> range_lengths;
    range_lengths.insert(X);
 
    for (int i = 0; i < N; i++) {
        ll pos = P[i];
        auto it = ranges.upper_bound({ pos, 0 });
        it--;
 
        ll start = it->first;
        ll end = it->second;
        ranges.erase(it);
        range_lengths.erase(
            range_lengths.find(end - start));
        ranges.insert({ start, pos });
        ranges.insert({ pos, end });
        range_lengths.insert(pos - start);
        range_lengths.insert(end - pos);
        cout << *range_lengths.rbegin() << "\n";
    }
}
 
// Drive Code
int main()
{
    ll X = 8, N = 3;
    cin >> X >> N;
    ll P[N] ;
    for(int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        P[i] = temp;
    }
    solve(X, N, P);
    return 0;
}