#include "Ostrich.h"

Ostrich::Ostrich(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) 
{

}

Ostrich::Ostrich(const Ostrich& H)
{
	
}

Ostrich::~Ostrich()
{
	//do nothing
}

Ostrich& Ostrich::operator= (const Ostrich& H)
{
	//Amphibi::operator=(H);
}

void Ostrich::interact()
{
	std::cout << "Kokokkkkk" << std::endl;
}

ostream& operator<< (ostream& os, const Ostrich& O) {
	os << 'o';
	return os;
}

char Ostrich :: GetSymbol() {
	return 'i';
}