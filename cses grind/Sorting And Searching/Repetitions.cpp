#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    char c = 'A';
    int count = 0, max_count = 0;
    for(auto i : s){
        if(c == i){
            count++;
            max_count = max(max_count, count);
        }else{
            count = 1;
            c = i;
        }
    }
    cout << max_count;
    return 0;
}