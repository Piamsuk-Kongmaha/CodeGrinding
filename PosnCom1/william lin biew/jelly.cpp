/*
TASK: IOI3
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,k,temp;
    cin >> n >> k;
    int r = n+k;

    priority_queue<int> v1;

    while(r--)
    {
        cin >> temp;
        v1.push(temp);
        if(temp == -1)
        {
            cout << v1.top() << '\n';
            v1.pop();
        }
    }
}