#include <stdio.h>
struct list {

int value;
struct list *next;

};
main()
{

int h[5] = {};
for(int i =0; i < 5; i++)
{
	scanf ("%d",&h[i]);
}
int i;
struct list n1, n2, n3, n4, n5;
struct list *list_pointer = &n1;
n1.value = h[0];
n1.next = &n2;
n2.value = h[1];
n2.next = &n3;
n3.value = h[2];
n3.next = &n4;
n4.value = h[3];
n4.next = &n5;
n5.value = h[4];
n5.next = 0;
while( list_pointer != 0 ) {

printf("%d\n", list_pointer->value);
list_pointer = list_pointer->next;

}

}
