
#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

vector<string>Morse {".-", "-...", "-.-.", "-..",".", "..-.", "--.", "....", "..", ".---",
                   "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                   "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--",
                   "....-", ".....", "-....", "--...", "---..", "----.", "-----", ".-.-.-",
                   "--..--", "..--.."};
vector<string>Letter {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
                    "k", "l", "m", "n", "o", "p", "q", "r", "s", "t",
                    "u", "v", "w", "x", "y", "z", "1", "2", "3", "4",
                    "5", "6", "7", "8", "9", "0", "Stop", ",", "?"};

int main()
{
    string morse_code;

    getline(cin,morse_code);

    stringstream mors(morse_code);
    string letter;

    while (mors >> letter) {
        vector<string>::iterator it;
        it = find(Morse.begin(), Morse.end(), letter);
        size_t dist = distance(Morse.begin(), it);
        cout << Letter[dist] ;
    }


}

