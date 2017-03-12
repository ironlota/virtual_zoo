#include "Piranha.h"

Piranha::Piranha()
{
	name = "Piranha";
}

Piranha::Piranha(const Piranha& H) : Pisces(H)
{
	
}

Piranha::~Piranha()
{
	//do nothing
}

Piranha& Piranha::operator= (const Piranha& H)
{
	Pisces::operator=(H);
}