#include "AfricanFrog.h"

AfricanFrog::AfricanFrog(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) : 
				  Amphibi(x_, y_, "AfricanFrog", tamed_, weight_, foodtype_, habitat)
{

}

AfricanFrog::AfricanFrog(const AfricanFrog& H) : Amphibi(H)
{
	
}

AfricanFrog::~AfricanFrog()
{
	//do nothing
}

AfricanFrog& AfricanFrog::operator= (const AfricanFrog& H)
{
	Amphibi::operator=(H);
}

void AfricanFrog::Interact()
{
	std::cout << "Krokok" << std::endl;
}

ostream& operator<< (ostream& os, const AfricanFrog& A) {
	os << 'a';
	return os;
}

char AfricanFrog :: GetSymbol() {
	return 'a';
}
