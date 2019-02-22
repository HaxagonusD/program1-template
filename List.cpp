#include <cstdlib>
#include <iostream>
#include "List.h"

Node::Node(Planet *p){
	this->planet = p;
	this->next = NULL;
	this->prev = NULL;
}

List::List(){
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

List::~List(){
	current = this->head;
	while(current->next != NULL){
		Node * next = current->next;
		delete current;
		current = next;
	}

}

void List::append(Planet * p){
	//add a node with planet p to the end of the list
	Node * tail = this->tail;
	this->tail = Node(p);
	this->tail->previous = tail
	this->size++;
}
Node * List::get_node_at_index(int index){
	//returns the Node at the index given
	Node * next = this->head;
	for(int i = 0; i < index; i++){
		next = next->next;
	}
	return next;
}
void List::insert(int index, Planet *p){
	//If index is outOfBoundsthan just add it to the end of the list
	if(index + 1> size){
		this->append(p);
	}
	/*
		if not, find the place to insert the new Node
		then insert the new node
	*/
	else {
		Node * next = get_node_at_index(int index);
		Node * nextAfter = next->next;
		next->next = Node(p);
		next->next->next = nextAfter;
		next->next->previous = next;
		this->size++;
	}
}

List::print(){
	Node * next = this->head;
	for(unsigned i = 0; i < this->size; i++){
		cout << next->planet << endl;
		next = next->next;
	}
}

Planet * List::read(int index){
	if(index + 1 > size){
		return get_node_at_index(index)->planet;
	} else {
		return NULL;
	}

}

unsigned List::size(){
	return this->size;
}

bool List::remove(int index){

	if(index + 1 > size){
		return false
	} else {
		Node * toBeDeleted = get_node_at_index(index);
		Node * next = toBeDeleted->next;
		Node * prev = toBeDeleted->prev;
		prev->next = next;
		next->previous = prev;
		delete toBeDeleted;
		return true;
	}

}
