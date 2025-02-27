#include<bits/stdc++.h>
using namespace std;
int main(){

    double x=0,y=0,dis;
    string str;
    int n;
    while(true){
        cin>>str;
        if(str == "*") {
             cout<<setprecision(3)<<fixed<<x;
             cout<<" "<<setprecision(3)<<fixed<<y<<"\n";
             dis = sqrt((x*x) + (y*y));
             cout<<setprecision(3)<<fixed<<dis;
             break ;
        }
        double tmp = 0;
        while(!isalpha(str[0])){
            tmp *= 10;
            tmp += str[0] - '0';
            str.erase(0,1);
        }
        double ds = tmp * sqrt(2)/2;
        if(str == "N"){
            y +=tmp;
        }
        else if(str == "S"){
            y -=tmp;
        }
        else if(str == "W"){
            x -=tmp;
        }
        else if(str == "E"){
            x +=tmp;
        }
        else if(str == "SW"){
            x-=ds;
            y-=ds;
        }
        else if(str == "SE"){
            y-=ds;
            x+=ds;
        }
        else if(str == "NE"){
            x+=ds;
            y+=ds;
        }
        else if(str == "NW"){
            x-=ds;
            y+=ds;
        }
    }

}
