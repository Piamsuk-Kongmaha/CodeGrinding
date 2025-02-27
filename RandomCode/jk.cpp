/*
TASK: trophy
LANG: C++
AUTHOR: PORAMET CHOMPHOOCHIT
CENTER: SUT
*/
 
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std ;
 
void point( int x ){
    while ( x-- > 0)
        cout << '.' ;
}
 
bool modBetween(int w , int x , int y , int z ) ;
    
 
int main(){
    string userInput ;
    int height , i , j , k , size , modStart = 0 , buff = 0 , bear = 0;
    
    cin >> userInput >> height ;
    size = userInput.size() - 1 ;
    
    for ( i = 0 ; i < (size + 1) * height ; i++ ){
        bear = i / height * height ;
        
        if ( i % height == 0 )
            modStart = 0 ;
        //buff =
        point(bear) ;
        
        for ( j = 0 ; j < 2 * height * ( size + 1 )  - 2 * bear ; j++ ){
            if ( modBetween(j , 2 * height , modStart , 2 * height - 2 - modStart ))
                cout << userInput[i / height] ;
            else
                cout << '.' ;
            
        }
        
        point(bear) ;
        modStart++ ;
        
        cout << '\n' ;      
    }
    
    return 0 ; 
}
 
bool modBetween(int  w , int x , int y , int z){
    if ( w % x >= y and w % x <= z )
        return true ;
    else
        return false ;
}
