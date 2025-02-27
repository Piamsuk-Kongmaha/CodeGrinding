#include<iostream>
using namespace std;
int m, maxh, maxw;
char c[35][300];
string letter = "0123456789ABCDEFGHIJKLMNOPQRSTUVWSYZ";
void making(int h, int s)
{
    int g = 1;
    for(int i = 1; i <= h; i++)
    {
        for(int j =1; j <= h*2-1;j++)
        {
            if (i==j) c[i][j+s-1] = letter[i];
            else if (i+j == h*2) c[i][j+s-1] = letter[i];
            else if (i<h && i<j&& i+j <= h*2) c[i][j+s-1] = '_';
        }
        g++;
    }
}



int main(){
    cin >> m;
    fill_n(c[0],35*300,' ');
    int s = 0;
    while(m--)
    {
        int h;
        cin >> h;              
		maxh = max(maxh,h);
        making(h,s);
        s+=h*2;
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