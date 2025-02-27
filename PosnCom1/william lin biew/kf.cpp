/*
TASK: sheild
LANG: C
AUTHOR: Piamsuk Kongmaha
CENTER: SUT
*/
#include <stdio.h>
int main()
{
    char ch;
    int i,j,n;
    scanf("%c",&ch);
    scanf("%d",&n);
    for (i=0;i<2*n+1;i++)
    {
        for (j=0;j<2*n+1;j++)
            if (i==n || j==n || i==j || i+j==2*n)       printf("+"); else
            if (i+j>=n && i+j<=3*n && i-j<=n && j-i<=n) printf("%c",ch); else
                                                        printf(".");
        printf("\n");
    }
    return 0;
}