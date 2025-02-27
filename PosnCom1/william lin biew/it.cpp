#include <iostream>
#include <cstring>
using namespace std;

char arr[25][25];

int main()
{
    memset(arr,'.',sizeof(arr));
    string str;
    cin >> str;
    int k;
    if(str.length() == 1) k = 1;
    else if(str.length() == 2) k = 5;
    else if(str.length() == 3) k = 9;
    else if(str.length() == 4) k = 17;
    else if(str.length() == 5) k = 19;
    else if(str.length() == 6) k = 23;
    else k = 25;
    int x = k/2,y = k/2;

    for(int i = 0;i<str.length();i++){
        for(int j = 0;j<=i;j++){
            arr[y][x] = str[j];
            if(i%8 == 0)x++;
            else if(i%8 == 1) {
                x++;
                y--;
            }else if(i%8 == 2) y--;
            else if(i%8 == 3){
                x--;
                y--;
            }else if(i%8 == 4){
                x--;
            }else if(i%8 == 5){
                y++;
                x--;
            }else{
                y++;
            }
        }
    }

    x = k/2,y = k/2;
    for(int i = 0;i<str.length();i++){
        for(int j = 0;j<=i;j++){
            arr[y][x] = str[j];
            if(i%8 == 0)y++;
            else if(i%8 == 1) {
                x++;
                y++;
            }else if(i%8 == 2) x++;
            else if(i%8 == 3){
                x++;
                y--;
            }else if(i%8 == 4) y--;
            else if(i%8 == 5){
                y--;
                x--;
            }else{
                x--;
            }
        }
    }

    x = k/2,y = k/2;
    for(int i = 0;i<str.length();i++){
        for(int j = 0;j<=i;j++){
            arr[y][x] = str[j];
            if(i%8 == 0)x--;
            else if(i%8 == 1) {
                x--;
                y++;
            }else if(i%8 == 2) y++;
            else if(i%8 == 3){
                x++;
                y++;
            }else if(i%8 == 4) x++;
            else if(i%8 == 5){
                y--;
                x++;
            }else{
                y--;
            }
        }
    }

    x = k/2,y = k/2;
    for(int i = 0;i<str.length();i++){
        for(int j = 0;j<=i;j++){
            arr[y][x] = str[j];
            if(i%8 == 0)y--;
            else if(i%8 == 1) {
                x--;
                y--;
            }else if(i%8 == 2) x--;
            else if(i%8 == 3){
                x--;
                y++;
            }else if(i%8 == 4) y++;
            else if(i%8 == 5){
                y++;
                x++;
            }else{
                x++;
            }
        }
    }

    for(int i = 0;i<k;i++){
        for(int j = 0;j<k;j++){
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}