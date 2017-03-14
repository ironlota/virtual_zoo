#include "Girrafe.h"

Girrafe::Girrafe(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) : 
			Mamalia(x_, y_, "Girrafe", tamed_, weight_,foodtype_,habitat) {
}

Girrafe::Girrafe(const Girrafe& H) : Mamalia(H)
{
	
}

Girrafe::~Girrafe()
{
	//do nothing
}

Girrafe& Girrafe::operator= (const Girrafe& H)
{
	Mamalia::operator=(H);
}

void Girrafe::Interact()
{
	std::cout << "Aaaakkk" << endl;
}

ostream& operator<< (ostream& os, const Girrafe&){
	os << 'g';
	return os;
}

char Girrafe :: GetSymbol() {
	return 'g';
}