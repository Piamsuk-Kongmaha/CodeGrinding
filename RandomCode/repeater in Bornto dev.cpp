#include <bits/stdc++.h>

using namespace std;

int main()
{
  char h[600];
  cin.getline(h, sizeof(h));
  
  int lenght = strlen(h);
  
  for (int i = 1;i <= lenght; i++)
    {
      for (int j = 0;j <= 2*(lenght - i)-1; j++)
        {
          cout << " ";
        }
      for (int k = i; k >= 1; k--)
        {
          cout << h[k - 1] << " ";
        }
		for (int k = 2; k <= i; k++)
        {
          cout << h[k - 1] << " ";
        }
      cout << endl;
    }
  
}
