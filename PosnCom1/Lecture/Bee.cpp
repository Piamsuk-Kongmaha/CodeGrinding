#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int bee[3][25] = {0};
    bee[0][0] = 1;
    bee[2][0] = 2;
    //memorization เก็บค่าไว้สำหรับแสดงผลลัภพ์ตามการ input
    for(int i = 1; i < 25; i++)
    {
        bee[0][i] = bee[2][i-1]; // ผึ้งงาน
        bee[1][i] = bee[0][i-1]; // ผึ้งทหาร
        bee[2][i] = bee[1][i] + bee[0][i] + 1; // ผึ้งรวม 
    }

}