#include "Caecilia.h"

Caecilia::Caecilia(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat)
{

}

Caecilia::Caecilia(const Caecilia& H) {
	
}

Caecilia::~Caecilia()
{
	//do nothing
}

Caecilia& Caecilia::operator= (const Caecilia& H)
{

}

void Caecilia::interact()
{
	std::cout << "Caeciliaaaaa" << std::endl;
}

ostream& operator<< (ostream& os, const Caecilia& C){
	os << 'c';
	return os;
}

char Caecilia :: GetSymbol() {
	return 'c';
}