#include <bits/stdc++.h>

using namespace std;

int main()
{
  int h;
  cin >> h;
  for (int i = 1; i <= h; i++)
    {
      for (int j = 0; j < 2*(h-i)-1; j++)
        {
          cout << " ";
        }
      for (int k = 1; k <= 2*i-1; k++)
        {
          cout << "*" ;
        }
      cout << endl;
    }
}

