#include "Vector.h"
#include "Planet.h"



Vector::Vector(){
	this->size=0;
	this->vectorArray=NULL;
	this->index=index;
	

}
Vector::~Vector(){
	
	delete[] vectorArray;

	
}

void Vector::insert(int index, Planet *p){

	
	//p=new Planet(rand()%3000,next_id);
	for(this->index=0;this->index<sizeof(array);this->index++){
		vectorArray[this->index]=p;
		this->size++;
		if(this->index>this->size){
			this->size=this->index+1;
		}
	}		

}


Planet* Vector::read(int index){
	if(this->index>this->size){
		return NULL;
	}
	else{ return vectorArray[this->index]; }
}

bool Vector::remove(int index){
	delete vectorArray[this->index];
	this->size=this->size-1;
	

}

unsigned Vector::size(){
	return this->size;
}
