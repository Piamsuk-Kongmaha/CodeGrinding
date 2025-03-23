#include <bits/stdc++.h>
using namespace std;

bool think(vector<int>& arr) {
  
    int sum = accumulate(arr.begin(), arr.end(), 0);
    int n = arr.size();

    if (sum % 2 != 0)
        return false;
        
    sum = sum/2;
    
    vector<bool> prev(sum+1, false), curr(sum+1);

    prev[0] = true;

    for (int i = 1; i <= n; i++) {
      
        for (int j = 0; j <= sum; j++) {
            if (j < arr[i - 1]) {
              
                curr[j] = prev[j];
            }
            else {
              	curr[j] = (prev[j] || prev[j - arr[i - 1]]);
            }

        }
        prev = curr;
    }

    return prev[sum];
}

int main() {
    vector<int> arr = {1,2,3,4};
    if (think(arr)) {
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
    return 0;
}
