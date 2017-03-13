#include "Deer.h"

Deer::Deer(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) : 
			Mamalia(x_, y_, "Deer", tamed_, weight_,foodtype_,habitat) {
}

Deer::Deer(const Deer& H) : Mamalia(H)
{
	
}

Deer::~Deer()
{
	//do nothing
}

Deer& Deer::operator= (const Deer& H)
{
	Mamalia::operator=(H);
}

void Deer::interact()
{
	std::cout << "Ngiiikkk" << endl;
}

ostream& operator<< (ostream& os, const Deer& D){
	os << 'd';
	return os;
}