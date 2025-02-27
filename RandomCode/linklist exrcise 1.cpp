#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

struct list {

	int value;
 	struct list *next;

};
int main()
{

	int i;
	struct list n1, n2, n3, n4;
	struct list *list_pointer = &n1;
	n1.value = cin << "Put Number" << int i;
	n1.next = &n2;
	n2.value = cin << "Put Number" << int i;
	n2.next = &n3;
	n3.value = cin << "Put Number" << int i;
	n3.next = &n4;
	n4.value = cin << "Put Number" << int i;
	n4.next = &n5;
	n5.value = cin << "Put Number" << int i;
	n5.next = 0;
	while( list_pointer != 0 ) {

		printf("%d\n", list_pointer->value);
		list_pointer = list_pointer->next;

	}		

}
