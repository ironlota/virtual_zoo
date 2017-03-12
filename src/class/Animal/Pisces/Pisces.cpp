#include "Pisces.h"

Pisces::Pisces(int x_, int y_, string name_, bool tamed_, float weight_, string foodtype_, string habitat) : 
		Animal(x_, y_, name_, tamed_, weight_, foodtype_, habitat)
{

}

Pisces::Pisces(const Pisces&) {

}

Pisces::~Pisces() {

}

Pisces& Pisces::operator=(const Pisces&) {

}

void Pisces::interact() {
    
}