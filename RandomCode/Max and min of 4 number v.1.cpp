#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int a;
    cin >> a; cin.ignore();
    int b;
    cin >> b; cin.ignore();
    int c;
    cin >> c; cin.ignore();
    int d;
    cin >> d; cin.ignore();
    int min = min({a,b,c,d});
    int max = max({a,b,c,d});




    cout << max-min << endl;
}
