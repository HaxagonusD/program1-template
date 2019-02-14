#include "Vector.h"
#include "Planet.h"

Vector::~Vector(){
	

	
}

void Vector::insert(int index, Planet *p){
	for(index=0;index<sizeof(array);index++){
		array[index]=p;
		size_vector++;
		if(index>size_vector){
			size_vector=index+1;
		}
	}		

}


Planet* Vector::read(int index){
	return;
}

bool Vector::remove(int index){

}

unsigned Vector::size(){
	return;
}
