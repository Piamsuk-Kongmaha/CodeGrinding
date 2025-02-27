#include <bits/stdc++.h>

using namespace std;

int check(string s)
{
	int x;
	
	if (s == "     |  |")
	{
		x = 1;
	}
	else if (s == " _  _||_ ")
	{
		x = 2;
	}
	
	else if (s == " _  _| _|")
	{
		x = 3;
	}
	
	else if (s == "   |_|  |")
	{
		x = 4;
	}
	
	else if (s == " _ |_  _|")
	{
		x = 5;
	}
	
	else if (s == " _ |_ |_|")
	{
		x = 6;
	}
	
	else if (s == " _   |  |")
	{
		x = 7;
	}
	
	else if (s == " _ |_||_|")
	{
		x = 8;
	}
	
	else if (s == " _ |_| _|")
	{
		x = 9;
	}
	
	else if (s == " _ | ||_|")
	{
		x = 0;
	}
	return x;
	
}

int main()
{
	int a,b;     
	cin>>a>>b;     
	string a1,a2,a3,plom1,plom2,b1,b2,b3,ca,cb;     
	getline(cin,plom2);     
	getline(cin,a1);     
	getline(cin,a2);     
	getline(cin,a3);     
	long int rea[105],reb[105];     
	int k=0;     
	for(int i=0;i<(a*4)-1;i=i+3){         
	ca = "";         
	if(i==0){             
	for(int j=i;j<i+3;j++){                 
	ca+=a1[j];             
	}             
	for(int j=i;j<i+3;j++){                 
	ca+=a2[j];             
	}             
	for(int j=i;j<i+3;j++){                 
	ca+=a3[j];             
	}
	}         
	else{             
	i++;             
	for(int j=i;j<i+3;j++){                 
	ca+=a1[j];             
	}             
	for(int j=i;j<i+3;j++){                 
	ca+=a2[j];             }             
	for(int j=i;j<i+3;j++){                 
	ca+=a3[j];             }         
	}         
	rea[k]=check(ca);         
	k++; 
    }     
	getline(cin,b1);     
	getline(cin,b2);     
	getline(cin,b3);     
	k=0;     
	for(int i=0;i<(b*4)-1;i=i+3){         
	cb = "";         
	if(i==0){             
	for(int j=i;j<i+3;j++){                 
	cb+=b1[j];             
	}             
	for(int j=i;j<i+3;j++){                 
	cb+=b2[j];             
	}            
	for(int j=i;j<i+3;j++){                 
	cb+=b3[j];             
	}         
	}         
	else{             
	i++;             
	for(int j=i;j<i+3;j++){                 
	cb+=b1[j];             
	}             
	for(int j=i;j<i+3;j++){                 
	cb+=b2[j];             
	}             
	for(int j=i;j<i+3;j++){                 
	cb+=b3[j];             
	} 
        }         
	reb[k]=check(cb);         
	k++; 
    }     
	long long int numa=0,numb=0;     
	for(int i=a-1,j=0;j<a;j++,i--){         
	numa+=rea[j]*(pow(10,i));     
	}     
	for(int i=b-1,j=0;j<b;j++,i--){         
	numb+=reb[j]*(pow(10,i));     
	}     
	
	cout << numa+numb;


return 0; }
	
