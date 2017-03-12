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

void Girrafe::interact()
{
	std::cout << "Aaaakkk" << endl;
}