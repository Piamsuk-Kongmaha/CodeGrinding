#include <stdio.h>  
int main()  
{  
    int n,m;  
    printf("Enter the number of rows");  
    scanf("%d",&n);  
    m=n;  
   for(int i=1;i<=n;i++)  
   {  
   		for(int k=1;k<=2*i-1;k++)  
       {  
         printf(" ");  
       } 
       for(int j=1;j<=2*(n-i);j++)  
       {  
           if (i == 1 || j == i || j == 2*(n-i))
           {
           	   printf("*"); 
		   }else
		   {
		   		printf(" ");
		   }
		
       }  
        
      printf("\n");  
    }  
    return 0;  
}  
