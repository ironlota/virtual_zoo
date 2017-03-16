#include "Starfish.h"

Starfish::Starfish(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

Starfish::Starfish(const Starfish& H)
{
	
}

Starfish::~Starfish()
{
	//do nothing
}

Starfish& Starfish::operator= (const Starfish& H)
{
	//Pisces::operator=(H);
}

void Starfish::interact()
{
	std::cout << "blublub" << std::endl;
}

ostream& operator<< (ostream& os, const Starfish& S)
{
	os << 'f';
	return os;
}

char Starfish :: GetSymbol() {
	return 'f';
}