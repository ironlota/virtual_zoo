#include "Exolotl.h"

Exolotl::Exolotl(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
			Amphibi(x_,y_,"Exolotl", tamed_, weight_, foodtype_, habitat)
{

}

Exolotl::Exolotl(const Exolotl& H) : Amphibi(H)
{
	
}

Exolotl::~Exolotl()
{
	//do nothing
}

Exolotl& Exolotl::operator= (const Exolotl& H)
{
	Amphibi::operator=(H);
}

void Exolotl::Interact(){
	std::cout << "shhhhhhhh" << std::endl;
}

ostream& operator<< (ostream& os, const Exolotl& E) {
	os << 'e';
	return os;
}

char Exolotl :: GetSymbol() {
	return 'e';
}