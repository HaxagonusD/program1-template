#include <cstdlib>
#include "List.h"
List::List(){
	this->head = NULL;
	this->tail = NULL;
	
}

List::~List(){
	current = this->head;
	
	while(current->next != NULL){
		Node * next = current->
		delete current;
		current = next;
	}

}
