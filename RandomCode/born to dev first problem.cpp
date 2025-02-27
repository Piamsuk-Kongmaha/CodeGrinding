#include <iostream>
using namespace std;


int main()
{
  int floor;
  cin >> floor;

  for(int i = 1; i <= floor; i++)
    {
      for(int j = 0; j < i; j++)
      {
      	cout << "*" ;
	  }
	  cout << endl;
    }
  
}

