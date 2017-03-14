#include "Mamalia.h"

Mamalia::Mamalia(int x_, int y_, string name_, bool tamed_, float weight_, string foodtype_, string habitat) : 
			Animal(x_, y_, name_, tamed_, weight_,foodtype_,habitat) {

}

Mamalia::Mamalia(const Mamalia&) {

}

Mamalia::~Mamalia() {

}

Mamalia& Mamalia::operator=(const Mamalia&) {

}

void Mamalia::interact()
{
	
}

char Mamalia :: GetSymbol() {
	
}