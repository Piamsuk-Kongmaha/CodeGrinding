/*
TASK: spiral
LANG: C++
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int i,j,n,x,y,loop,style,dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}},cont[2]={1,-1};
    char ch;
    cin >> n;
    vector <vector<char> > screen(n,vector<char>(n,'.'));
    cin >> x >> y >> loop >> style >> ch;
    for (i=0;i<loop;i++)
        for (j=0;j<i+1;j++)
            {
                if (x>=0 && x<n && y>=0 && y<n)
                    screen[y][x] = ch;
                x+=dir[i%4][0]*cont[style];
                y+=dir[i%4][1];
            }
    for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++) cout << screen[i][j];
            cout << endl;
        }
    return 0;
}
