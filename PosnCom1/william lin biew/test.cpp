/*
TASK: lcs
LANG: C++
AUTHOR: Piamsuk Kongmah
CENTER: SUT
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcdefghijklmnoqrstuvwxyz";

    string q;
    cin >> q;
    int c= 0;
    int r = s.size()- 1;
    string result = "";
    int l = 0;
    int qsize = q.size();
    for(int i = 0; i <= q.size(); i++)
    {   
       if(i == q.size())
       {
            if(c%2==0)
            {
                for(int j = i-c; j < i; j++)
                {
                    result += s[int(q[j]+c - 97)];
                }

            }else{
                for(int j = i-c; j < i; j++)
                {
                    result += s[r-c+1];
                }
            }
            
        break;
       }
        if(q[i] == ':') 
        {
            if(c%2==0)
            {
                for(int j = i-c; j < i; j++)
                {
                    result += s[int(q[j]+c - 97) % 26];
                }

            }else{
                for(int j = i-c; j < i; j++)
                {
                    result += s[r-c+1];
                }
            }
            
            result += ':';
            c = 0;
        }else
        {
            c++;
        }
         
    }
    cout << result;

}