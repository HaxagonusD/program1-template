#ifndef HEADER_NA
#define HEADER_NA
class Planet{
	private:
		int id;
		int distance;
		int pos;
		char type;
	public:
		Planet(int,int);
        	int orbit();
		long int getID();
        	int getDistance();
        	int getPosition();
		char getType();
		
}; 


#endif
