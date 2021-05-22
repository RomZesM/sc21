#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
	int data;
	struct Node * next;
}Node;

int main()
{
	Node a = {12}, b = {42}, c = {21}, t = {77};
	Node * start = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;

	return (0);
}
