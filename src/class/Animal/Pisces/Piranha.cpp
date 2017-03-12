#include "Piranha.h"

Piranha::Piranha(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
		Pisces(x_, y_, "Piranha", tamed_, weight_, foodtype_, habitat)
{

}

Piranha::Piranha(const Piranha& H) : Pisces(H)
{
	
}

Piranha::~Piranha()
{
	//do nothing
}

Piranha& Piranha::operator= (const Piranha& H)
{
	Pisces::operator=(H);
}

void Piranha::interact()
{
	std::cout << "Bitebitebite" << std::endl;
}