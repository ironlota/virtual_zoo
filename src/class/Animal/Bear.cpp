#include "Bear.h"

Bear::Bear(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) {
}

Bear::Bear(const Bear& H) 
{
	
}

Bear::~Bear()
{
	//do nothing
}

Bear& Bear::operator= (const Bear& H)
{
	
}


void Bear::interact()
{
	std::cout << "Groooowll" << endl;
}

ostream& operator<< (ostream& os, const Bear& B) {
	os << 'b';
	return os;
}

char Bear :: GetSymbol() {
	return 'b';
}