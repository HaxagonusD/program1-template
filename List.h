#ifndef LIST_H
#define LIST_H
#include "Planet.h"

class Node{
	Node * next;
	Node * previous;
	Planet * planet;
	Node(Planet *);
}

class List{
	Node * head;
	Node * tail;
	unsigned size;
	List();
	~List();
	insert(int, Planet *);
	append(Planet *);
	get_node_at_index(int);
	size();
	print();
}
#endif
