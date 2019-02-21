#include "Planet.h"
#include <stdlib.h>



Planet::Planet(int distance){
		
	this->distance=rand()%3001;
	this->pos=rand()%360;
	this->type=rand()%3; 
	int r=rand()%3;

	if(r==0){
		this->type='h';
	}
	if(r==1){
		this->type='r';
	}
	if(r==2){
		this->type='g';
	} 

}

int Planet::orbit(){
	if(this->pos < 359){
		this->pos=this->pos+1;
	}
	return this->pos;
}


/*long int Planet::getID(){
	return this->id;
}
int Planet::getDistance(){
	return this->distance;
}
int Planet::getPosition(){
	return this->pos;
}

char Planet::getType(){

	return this->type;
}*/
	
