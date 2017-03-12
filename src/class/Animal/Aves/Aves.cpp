#include "Aves.h"

Aves::Aves(int x_, int y_, string name_, bool tamed_, float weight_, string foodtype_, string habitat) :
	    Animal(x_,y_,name_,tamed_, weight_, foodtype_, habitat)
{

}

Aves::Aves(const Aves&) {

}

Aves::~Aves() {

}

Aves& Aves::operator=(const Aves&) {

}

void Aves::interact()
{

}
