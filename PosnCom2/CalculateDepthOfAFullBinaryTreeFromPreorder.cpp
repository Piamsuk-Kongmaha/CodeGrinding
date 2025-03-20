#include <bits/stdc++.h>
using namespace std;

int findDepthRec(string& s, int n, int& index) {
    if (index >= n || s[index] == 'l')
        return 0;

    index++;
    int left = findDepthRec(s, n, index);

    index++;
    int right = findDepthRec(s, n, index);

    return max(left, right) + 1;
}

int findDepth(string& s, int n) {
    int index = 0;
    return findDepthRec(s, n, index);
}

int main() {
    string s = "nlnnlll";

    cout << findDepth(s, s.size())<< endl;

    return 0;
}
