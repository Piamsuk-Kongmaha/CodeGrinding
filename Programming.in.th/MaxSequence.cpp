#include <bits/stdc++.h>

using namespace std;
#define pb push_back

int main()
{
    int n;
    cin >> n;
    int st,ed,st1,ed2;
    vector<int> nums;
    for(int i =0; i < n; i++)
    {
        int temp;
        cin >> temp;
        nums.pb(temp);
    }   
    int best = 0, sum = 0;
    for (int i = 0; i < n; i++) {
         if(nums[i] > nums[i]+sum)
         {
            st=i;
            ed=i;
            sum=nums[i];
         }else
         {
            sum+=nums[i];
            ed=i;
         }

         if(best < sum)
         {
            st1 = st;
            ed2 = ed;
            best = sum;
         }
    }
    if(best == 0)
    {
        cout << "Empty sequence";
        return 0;
    }
    
   for(int i =st1; i<=ed2; i++)
   {
    cout << nums[i] << ' ';
   }
   cout << "\n" << best ;
   return 0;
}