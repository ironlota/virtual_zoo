#include "Deer.h"

Deer::Deer(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) {
}

Deer::Deer(const Deer& H)
{
	
}

Deer::~Deer()
{
	//do nothing
}

Deer& Deer::operator= (const Deer& H)
{
	//Mamalia::operator=(H);
}

void Deer::interact()
{
	std::cout << "Ngiiikkk" << endl;
}

ostream& operator<< (ostream& os, const Deer& D){
	os << 'd';
	return os;
}

char Deer :: GetSymbol() {
	return 'd';
}