#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

ll compute_count(ll m_i, ll i, int target) {
    ll a = i + 1;
    ll b = (target - i) % 26;
    if (b < 0) b += 26;
    ll d = __gcd(a, 26LL);
    if (b % d != 0) return 0;
    
    ll a1 = a / d;
    ll b1 = b / d;
    ll mod = 26 / d;
    
    ll inv_a1 = -1;
    for (ll x = 0; x < mod; ++x) {
        if ((a1 * x) % mod == 1 % mod) {
            inv_a1 = x;
            break;
        }
    }
    if (inv_a1 == -1) return 0;
    
    ll x0 = (b1 * inv_a1) % mod;
    if (x0 < 0) x0 += mod;
    
    if (x0 >= m_i) return 0;
    ll count = (m_i - 1 - x0) / mod + 1;
    return count;
}

ll solve_query(ll m_i, char c_i, ll k_i) {
    int target = c_i - 'A';
    if (m_i == 1) {
        ll full_cycles = (k_i - 1) / 1; 
        ll remainder = (k_i - 1) % 1;
        return full_cycles * 26 + target;
    } else {
        ll low = 0;
        ll high = 1e12;
        ll answer = 0;
        
        vector<ll> dp(26, -1);
        
        while (low <= high) {
            ll mid = (low + high) / 2;
            ll total = 0;
            bool found = false;
            
            ll full_cycles = (mid + 1) / 26;
            ll remainder = (mid + 1) % 26;
            
            ll cycle_sum = 0;
            for (ll i = 0; i < 26; ++i) {
                if (dp[i] == -1) {
                    dp[i] = compute_count(m_i, i, target);
                }
                cycle_sum += dp[i];
            }
            total = full_cycles * cycle_sum;
            
            for (ll i = 26 * full_cycles; i <= mid; ++i) {
                ll mod_i = i % 26;
                if (dp[mod_i] == -1) {
                    dp[mod_i] = compute_count(m_i, i, target);
                }
                total += dp[mod_i];
                if (total >= k_i) {
                    found = true;
                    break;
                }
            }
            
            if (total >= k_i) {
                answer = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return answer;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q;
    cin >> Q;
    while (Q--) {
        ll m_i, k_i;
        char c_i;
        cin >> m_i >> c_i >> k_i;
        cout << solve_query(m_i, c_i, k_i) << '\n';
    }
    return 0;
}