#include "Mantaray.h"

Mantaray::Mantaray(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
			Pisces(x_, y_, "Mantaray", tamed_, weight_, foodtype_, habitat)
{

}

Mantaray::Mantaray(const Mantaray& H) : Pisces(H)
{
	
}

Mantaray::~Mantaray()
{
	//do nothing
}

Mantaray& Mantaray::operator= (const Mantaray& H)
{
	Pisces::operator=(H);
}

void Mantaray::interact()
{
	std::cout << "blubub" << endl;
}