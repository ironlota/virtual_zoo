#include "Salamander.h"

Salamander::Salamander(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
				Amphibi(x_,y_,"Salamander",tamed_,weight_,foodtype_,habitat)
{

}

Salamander::Salamander(const Salamander& H) : Amphibi(H)
{
	
}

Salamander::~Salamander()
{
	//do nothing
}

Salamander& Salamander::operator= (const Salamander& H)
{
	Amphibi::operator=(H);
}

void Salamander::interact()
{
	std::cout << "brrrrr" << std::endl;
}

ostream& operator<< (ostream& os, const Salamander& S){
	os << 's';
	return os;
}