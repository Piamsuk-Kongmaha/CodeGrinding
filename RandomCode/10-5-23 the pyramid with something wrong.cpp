#include <iostream>
#include <cmath>
using namespace std;


int main()
{
  int a,temp;
  cin >> a;

  for (int i = 1; i <= a; i++)
    {
      for(int j = 1; j<= i ; j++)
        {
          cout << j << " ";
        }
      cout << endl;
    }
  if (a == 1)
  {
    cout << "0";
  } else
  {
    temp = (a * (a - 4) * (a + 1) + 12) / 6;
    cout << temp;
  }
}

//Tips:  Run for check input format
