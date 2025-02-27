#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int cost;
    char tmp;
    cin >> n;
    priority_queue<long long int> pq;
    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        if(tmp == 'P')
        {
            cin >> cost;
            pq.push(cost);
        }else if(tmp == 'Q')
        {

            if(!pq.empty())
            {
                   cout << pq.top() << '\n';
                pq.pop();
            }else{
                cout << "-1" << '\n';
            }
         
        }
    }
}