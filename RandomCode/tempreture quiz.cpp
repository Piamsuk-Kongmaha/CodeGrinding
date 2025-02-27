#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Enter the fahrenheit = ";
	double Ftemp;
	cin >> Ftemp;
	double Ctemp = (Ftemp - 32) / 1.8;
	
	cout << "the tempreture in Celsius is " << Ctemp;
	
	return 0;
}
