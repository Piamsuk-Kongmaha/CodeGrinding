#include <iostream>
#include <vector>
 
using namespace std;
 
bool CAE(int n, const vector<int>& b) {
  
    if (n == 3) 
        return true;

    for (int i = 0; i < b.size() - 2; i++) 
            if (i + 2 < b.size() && b[i] == 1 && b[i + 1] == 0 && b[i + 2] == 1) 
                return false;
    
    return true;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    for(int i = 0;i < n; i++) {
        int e;
        cin >> e;
        
        vector<int> b(e - 2);
        int size = e-2;
        for (int i = 0; i < size; i++) {
            cin >> b[i];
        }
        
        cout << (CAE(e, b) ? "YES\n" : "NO\n");
    }
    
    return 0;
}