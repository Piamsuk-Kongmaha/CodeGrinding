#include <iostream>
#include <cmath>
using namespace std;

int main () {
	cout << "Enter the radius : ";
	const double pi = 3.14;
	int radius;
	cin >> radius;
	double powradius = pow(radius ,2);
	double area = ceil(pi*powradius);
	cout << area;
	
	 
}
