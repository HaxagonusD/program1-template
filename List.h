#ifndef LIST_H
#define LIST_H
#include "Planet.h" 

class Node{
	public:
	Node * next;
	Node * previous;
	Planet * planet;
}
 
class List{
	public:
	Node * head;
	Node * tail;
}
#endif
