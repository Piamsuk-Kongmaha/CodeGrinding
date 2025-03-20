#include <bits/stdc++.h>
using namespace std;

string LCP(vector<string>& arr) {

    sort(arr.begin(), arr.end());

    string first = arr.front();
    string last = arr.back();
    int minLength = min(first.size(), last.size());

    int i = 0;
  
    while (i < minLength && first[i] == last[i]) {
        i++;
    }

    return first.substr(0, i);
}

int main() {
    vector<string> arr = {"testing", "test", "tester"};
    cout << LCP(arr) << endl;

    return 0;
}