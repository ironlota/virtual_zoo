#include "Shark.h"

Shark::Shark()
{
	name = "Shark";
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