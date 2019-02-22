#ifndef HEADER_V
#define HEADER_V
#include "Planet.h"


class Vector{
	private:
		int index;
		unsigned size;
		Planet ** vectorArray;
	public:

		~Vector();
		void insert(int,Planet);
		Planet* read(int);
		bool remove(int);
		unsigned size();
        	
}; 


#endif
