#include <bits/stdc++.h>
using namespace std;

int floorSqrt(double n) {
    double low = 1, high = n;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= (long long)(n)) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return high;
}

int main()
{
    int n = 28;
    double ans = floorSqrt(n);
    cout << "The floor of square root of " << n
         << " is: " << ans << "\n";
    return 0;
}
