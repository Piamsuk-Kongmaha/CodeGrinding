
#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       
        int m = n + n/2; 
        vector<int> freq(m+1, 0);
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
           
            freq[x]++;
        }
 
      
        int maxCarry = 2*n; 
        vector<vector<bool>> dp(m+2, vector<bool>(maxCarry+1, false));
        dp[1][0] = true; 
 
       
        for (int x = 1; x <= m; x++){
            for (int carry = 0; carry <= maxCarry; carry++){
                if(!dp[x][carry]) continue;
                int F = freq[x] + carry;
               
                for (int k = 0; k <= F; k++){
                    int r = F - k; 
                    if(r % 2 != 0) continue;
                    
                    if(k > 0 && r < 2) continue;
                   
                    if(k <= maxCarry){
                        dp[x+1][k] = true;
                    }
                }
            }
        }
 
        
        if(dp[m+1][0])
            cout << "yes";
        else
            cout << "no";
        cout << '\n';
    }
    return 0;
}