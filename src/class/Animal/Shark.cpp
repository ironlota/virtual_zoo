#include "Shark.h"

Shark::Shark(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{
}

Shark::Shark(const Shark& H)
{
	
}

Shark::~Shark()
{
	//do nothing
}

Shark& Shark::operator= (const Shark& H)
{
	//Pisces::operator=(H);
}

void Shark::interact()
{
	std::cout << "blublublub" << std::endl;
}

ostream& operator<< (ostream& os, const Shark& S)
{
	os << 's';
	return os;
}
char Shark :: GetSymbol() {
	return 's';
}