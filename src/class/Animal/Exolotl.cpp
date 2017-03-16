#include "Exolotl.h"

Exolotl::Exolotl(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

Exolotl::Exolotl(const Exolotl& H)
{
	
}

Exolotl::~Exolotl()
{
	//do nothing
}

Exolotl& Exolotl::operator= (const Exolotl& H)
{
	
}

void Exolotl::interact(){
	std::cout << "shhhhhhhh" << std::endl;
}

ostream& operator<< (ostream& os, const Exolotl& E) {
	os << 'e';
	return os;
}

char Exolotl :: GetSymbol() {
	return 'e';
}