#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "WELCOME";
    string g = s;
    reverse(g.begin(),g.end());   
	int n = s.length();
    int k = n*2-1;
    for(int i = 0; i < n; i++)
    {
        for(int q = 0 ; q < n; q++)
        {
            for(int j = 0; j < k; j++)
            {
                if(q!= 0 && j == i) cout << '-';
                if(j>=i&&j<=k-i-1)
                {
                    cout << s[i];
                    if(j == k-i-1) cout << "-";
                }  
                else if((q == 0 && j < n) || (q == n-1 && j >= n)) cout << '.';
                else  cout << g[i];
            }
            if(q < n-1)
            {
                cout << g[i];
            }
				
        }
        
        cout << '\n';
    }
}