#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	// initializing variable
	char str[100];

	// accepting input
	 cin >> str;
	
	int len = strlen(str);

	// iterating the string
	for(int i=0; i<len; i++)
	{   
	    // checking vowels.
		if(str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'
		||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='0')
		{

		    // deleting vowels by shifting left all upcoming characters left 
			for(int j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		i--;
		len--;
		}
	}
	// can directly print str
	// as '\0' also shifted left as many times as vowels were found
	cout << str;

    return 0;	
}
