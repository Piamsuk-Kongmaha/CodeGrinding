#include <iostream>
using namespace std;

bool isPalindrome(string s, int i){
		
	if(i > s.size()/2){
	return true ;
	}
	
	return s[i] == s[s.size()-i-1] && isPalindrome(s, i+1) ;
	
}
	
	
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	string str;
    cin >> str;
	if (isPalindrome(str, 0))
	cout << "yes";
	else
	cout << "no";

	return 0;

}
