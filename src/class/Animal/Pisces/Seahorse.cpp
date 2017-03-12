#include "Seahorse.h"

Seahorse::Seahorse(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
			Pisces(x_, y_, "Seahorse", tamed_, weight_, foodtype_, habitat)
{

}

Seahorse::Seahorse(const Seahorse& H) : Pisces(H)
{
	
}

Seahorse::~Seahorse()
{
	//do nothing
}

Seahorse& Seahorse::operator= (const Seahorse& H)
{
	Pisces::operator=(H);
}

void Seahorse::interact()
{
	std::cout << "Swimming" << endl;
}