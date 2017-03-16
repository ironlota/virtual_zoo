#include "Mantaray.h"

Mantaray::Mantaray(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

Mantaray::Mantaray(const Mantaray& H)
{
	
}

Mantaray::~Mantaray()
{
	//do nothing
}

Mantaray& Mantaray::operator= (const Mantaray& H)
{
	//Pisces::operator=(H);
}

void Mantaray::interact()
{
	std::cout << "blubub" << endl;
}

ostream& operator<< (ostream& os, const Mantaray& M) {
	os << 'm';
	return os;
}
char Mantaray :: GetSymbol() {
	return 'm';
}