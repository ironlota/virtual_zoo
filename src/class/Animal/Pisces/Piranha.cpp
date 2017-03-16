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

void Piranha::Interact()
{
	std::cout << "Bitebitebite" << std::endl;
}

ostream& operator<< (ostream& os, const Piranha& P)
{
	os << 'p';
	return os;
}
char Piranha :: GetSymbol() {
	return 'p';
}