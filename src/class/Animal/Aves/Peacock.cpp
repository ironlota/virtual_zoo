#include "Peacock.h"

Peacock::Peacock(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
			Aves(x_,y_,"Peacock",tamed_,weight_,foodtype_,habitat)
{

}

Peacock::Peacock(const Peacock& H) : Aves(H)
{
	
}

Peacock::~Peacock()
{
	//do nothing
}

Peacock& Peacock::operator= (const Peacock& H)
{
	Aves::operator=(H);
}

void Peacock::interact()
{
	std::cout << "wusshhhhh" << std::endl;
}

ostream& operator<< (ostream& os, const Peacock&){
	os << 'p';
	return os;
}