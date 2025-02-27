/*
TASK: bitstring
LANG: C
AUTHOR: Piamsuk Kongmah
CENTER: SUT
*/

// ผมเขียน cpp แล้วรันไม่ได้ครับ
#include <stdio.h>
#include <string.h>
char st[25],sub[25];
int n,count=0;
void think(int deep)
{
    if (deep==n)
    {
        if (strstr(st,sub)!=NULL)
        {
            count++;
        }
    } else
    {
        st[deep] = '0';
        think(deep+1);
        st[deep] = '1';
        think(deep+1);
    }
}
int main()
{
    scanf("%d",&n);
    scanf("%s",&sub);
    st[n]=0;
    think(0);
    printf("%d",count);
    return 0;
}
