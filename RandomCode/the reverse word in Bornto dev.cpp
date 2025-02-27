#include <iostream>
#include <string.h>

using namespace std;

void reverse(char *cat);
void reverse_word(char *dog);

int main(void)
{
	char test[600];
	
	cin.getline(test, sizeof(test));
	
	//reverse(test);
	reverse_word(test);

	
	cout << test;
	
	return 0;
}
void reverse(char *cat)
{
	int length = strlen(cat);
	int middle = length / 2;
	char temp;
	for (int i = 0 ; i < middle; i++)
	{
		temp  = cat[i];
		cat[i] = cat[length - i - 1];
		cat[length - i - 1] = temp;
	}
}

void reverse_word(char *s)
{
	int len  = strlen(s);
	int k = 0, j = 0;
	char meow[500];
	
	for (k = 1; k < len; k++)
	{
		for(j = 0; k < len; j++, k++)
		{
			if (s[k] == ' ' || s[k] == '/0')
			{
				break;
			}
			meow[j] = s[k];
		}
		
		while (j > 0)
		{
			j--;
			s[k-j-1] = meow[j];
		}
	}
}


