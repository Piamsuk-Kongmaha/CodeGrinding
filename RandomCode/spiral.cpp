#include <iostream>
#define size 50
using namespace std ;
 
void Tmove(string direction , long int turtle[] , bool area[][size] , long int x ){
    
    if ( direction == "down" )
        while ( x-- )
            turtle[1]++ , area[turtle[1]][turtle[0]] = true ;
    else if ( direction == "left" )
        while ( x-- )
            turtle[0]-- , area[turtle[1]][turtle[0]] = true ;
    else if ( direction == "up" )
        while ( x-- )
            turtle[1]-- , area[turtle[1]][turtle[0]] = true ;
    else if ( direction == "right" )
        while ( x-- )
            turtle[0]++ , area[turtle[1]][turtle[0]] = true;
    else if ( direction == "stall")
            area[turtle[1]][turtle[0]] = true;
        
}
 
int main(){
    unsigned char chicken ;
    cin >> chicken ;
    
    long int n , i , j ;
    string direction[4] = {"up","left","down","right"} ;
    cin >> n ;
    
    bool area[size][size] = {} ;
    long int turtle[2] = { (n+1)/2 , n/4*2+1 } ;
    
    Tmove("stall",turtle,area,0) ;
    
    for ( i = 0 ; i <= n ; i++ ){
        if ( i == 0 )
            Tmove("stall",turtle,area,i+1) ;
        
        Tmove(direction[i%4],turtle,area,i+1) ;
    }
 
    
    for ( i = 0 ; i < n + 2 ; i++ )
        for ( j = 0 ; j < n + 1 + n % 2 ; j++ )
            {
                if (area[i][j])
                    cout << chicken ;
                else
                    cout << " " ;
                    
                if ( j == n + n % 2 )
                    cout << '\n' ;
            }
    
    return 0 ;
}
