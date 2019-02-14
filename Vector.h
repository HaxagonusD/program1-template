#ifndef HEADER_NA
#define HEADER_NA
class Vector{
	private:
		int index;
		Planet * array[]; 
	public:

		~Vector();
		void insert(int,Planet);
		Planet* read(int);
		bool remove(int);
		unsigned size();
        	
}; 


#endif
