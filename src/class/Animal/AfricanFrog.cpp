#include "AfricanFrog.h"

AfricanFrog::AfricanFrog(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

AfricanFrog::AfricanFrog(const AfricanFrog& H)
{
	
}

AfricanFrog::~AfricanFrog()
{
	//do nothing
}

AfricanFrog& AfricanFrog::operator= (const AfricanFrog& H)
{
	
}

void AfricanFrog::interact()
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