#include<iostream>
using namespace std;
int m, maxh, maxw;
char c[300][300];
void making(int h, int s, int d)
{
    for(int i = 1; i <= d; i++)
    {
        for(int j = 1; j <= h*2; j++)
        {
            if(j == 1 || j == h*2) c[i][j+s-1]= '|';
            else c[i][j+s-1] = '.';
        }
    }
    int m = h+d;
    for(int i = d+1; i <= m; i++) 
    {
        for(int j =1; j <= h*2+1;j++)
        {
            if ((i-d)==j) c[i][j+s-1] = '/';
            else if ((i-d)+j == h*2+1) c[i][j+s-1] = '\\';
            //else if (i<h && i<j&& i+j <= h*2) c[i][j+s-1] = '';
        }
    }

    
}



int main(){
    cin >> m;
    fill_n(c[0],300*300,' ');
    int s = 0;
    while(m--)
    {
        int x,y;
        cin >> x >> y;
        x++;
		maxh = max(maxh,x+y);
        making(x,s,y);
        s+=x*2 + 1;
    }

    for(int i = maxh; i > 0; i-- )
    {
        for(int j = 0; j <= s; j++)
        {
            cout << c[i][j];
        }
        cout << '\n';
    }
}