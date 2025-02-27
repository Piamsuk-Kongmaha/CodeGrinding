#include <bits/stdc++.h>
using namespace std;

long long int nthFibonacciUtil(long long int n, vector<long long int>& memo) {
  
    if (n <= 1) {
        return n;
    }

    if (memo[n] != -1) {
        return memo[n];
    }


    memo[n] = nthFibonacciUtil(n - 1, memo) + nthFibonacciUtil(n - 2, memo);

    return memo[n];
}

long long int nthFibonacci(long long int n) {
    vector<long long int> memo(n + 1, -1);
    return nthFibonacciUtil(n, memo);
}

int main() {
    long long int n = 5;
    cin >> n;
    long long int result = nthFibonacci(n);
    cout << result << endl;

    return 0;
}