#include "Salamander.h"

Salamander::Salamander(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

Salamander::Salamander(const Salamander& H){
	
}

Salamander::~Salamander()
{
	//do nothing
}

Salamander& Salamander::operator= (const Salamander& H)
{
	
}

void Salamander::interact()
{
	std::cout << "brrrrr" << std::endl;
}

ostream& operator<< (ostream& os, const Salamander& S){
	os << 's';
	return os;
}

char Salamander :: GetSymbol() {
	return 'r';
}