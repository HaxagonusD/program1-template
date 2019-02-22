#ifndef HEADER_P
#define HEADER_P
class Planet{
	private:
		int id;
		int distance;
		int pos;
		char type;
	public:
		Planet(int,int);
        	int orbit();
		long int getID(){
			return this->id;
		}
		int getDistance(){
			return this->distance;
		}
		int getPosition(){
			return this->pos;
		}	

		char getType(){

			return this->type;
		}
		
}; 


#endif
