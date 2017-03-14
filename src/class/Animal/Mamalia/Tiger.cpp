#include "Tiger.h"

Tiger::Tiger(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) : 
			Mamalia(x_, y_, "Tiger", tamed_, weight_,foodtype_,habitat) {
}

Tiger::Tiger(const Tiger& H) : Mamalia(H)
{
	
}

Tiger::~Tiger()
{
	//do nothing
}

Tiger& Tiger::operator= (const Tiger& H)
{
	Mamalia::operator=(H);
}

void Tiger::interact()
{
	std::cout << "Raaawwwrr" << endl;
}

ostream& operator<< (ostream& os, const Tiger&){
	os << 't';
	return os;
}

char Tiger :: GetSymbol() {
	return 't';
}
