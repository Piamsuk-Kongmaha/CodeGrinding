#include <iostream>
using namespace std;

int main() {
	int sales = 95000;
	double state_tax = sales * .04;
	double country_tax = sales * .02;
	int total_tax = state_tax + country_tax;
	
	cout << "sales = " << sales << endl
		 << "state_tax = " << state_tax << endl
		 << "country_tax = " << country_tax << endl
		 << "total tax = " << total_tax;
		 
	return 0;
}
