#include "Elephant.h"

Elephant::Elephant(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) : 
			Mamalia(x_, y_, "Elephant", tamed_, weight_,foodtype_,habitat) {
}

Elephant::Elephant(const Elephant& H) : Mamalia(H)
{
	
}

Elephant::~Elephant()
{
	//do nothing
}

Elephant& Elephant::operator= (const Elephant& H)
{
	Mamalia::operator=(H);
}

void Elephant::interact()
{
	std::cout << "Trooooottt" << endl;
}

ostream& operator<< (ostream& os, const Elephant& E){
	os << 'e';
	return os;
}

char Elephant :: GetSymbol() {
	return 'e';
}