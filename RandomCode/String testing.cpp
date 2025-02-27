#include <bits/stdc++.h>

using namespace std;

void reverse(char* s)
{
	int len = strlen(s);
	int middle = len/2;
	char temp;
	for(int i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[len - i- 1];
		s[len - i - 1] = temp;
	}
}

void reverseword(char*s)
{
	int len = strlen(s);
	int i = 0, j=0;
	char test[500];
	
	for(i = 0; i < len; i++)
	{
		for (j = 0; i < len; j++, i++)
		{
			if(s[i] == ' ' || s[i] == '.')
			{
				break;
			}
			test[j] = s[i];
		}
		
		while (j > 0)
		{
			j--;
			s[i-j-1] = test[j];
		}
	}	
}


int main()
{
	char s[500];
	cin.getline(s,sizeof(s));
	
	reverse(s);	
	reverseword(s);
	
	cout << endl << s;

	
}
