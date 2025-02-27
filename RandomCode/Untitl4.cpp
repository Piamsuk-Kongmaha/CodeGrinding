#include <iostream>

using namespace std;


class cat{
public:
	void containsDuplicate(){
		cout << "hello world";
	}
};

int main()
{
	cat(&containsDuplicate);
}
