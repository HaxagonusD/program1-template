#include "Planet.h"
#include <stdlib.h>
//#include <iostream> 

//using namespace std;


Planet::Planet(int distance){
	//this->id=id;	
	this->distance=rand()%3001;
	this->pos=rand()%360;
	this->type=rand()%3; //   'h' = habitable, 'r'=rocky, 'g'=gaseous        yeni bir array veya switch case..........
}

int Planet::orbit(){
	if(this->pos < 359){
		this->pos=this->pos+1;
	}
	return this->pos;
}

long int Planet::getID(){
	return this->id;
}
int Planet::getDistance(){
	return this->distance;
}
int Planet::getPosition(){
	return this->pos;
}

char Planet::getType(){

	if(this->type==0){
		this->type='h';
	}
	if(this->type==1){
		this->type='r';
	}
	if(this->type==2){
		this->type='g';
	} 

	return this->type;
}
	
