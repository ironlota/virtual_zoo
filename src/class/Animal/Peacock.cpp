#include "Peacock.h"

Peacock::Peacock(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

Peacock::Peacock(const Peacock& H)
{
	
}

Peacock::~Peacock()
{
	//do nothing
}

Peacock& Peacock::operator= (const Peacock& H)
{
	//Aves::operator=(H);
}

void Peacock::interact()
{
	std::cout << "wusshhhhh" << std::endl;
}

ostream& operator<< (ostream& os, const Peacock&){
	os << 'p';
	return os;
}

char Peacock :: GetSymbol() {
	return 'p';
}