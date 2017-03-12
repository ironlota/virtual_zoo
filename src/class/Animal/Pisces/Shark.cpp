#include "Shark.h"

Shark::Shark(int x_, int y_, bool tamed_, float weight_, string foodtype_, string habitat) :
		Pisces(x_,y_, "Shark", tamed_, weight_, foodtype_, habitat)
{

}

Shark::Shark(const Shark& H) : Pisces(H)
{
	
}

Shark::~Shark()
{
	//do nothing
}

Shark& Shark::operator= (const Shark& H)
{
	Pisces::operator=(H);
}

void Shark::interact()
{
	std::cout << "blublublub" << std::endl;
}