#include "Seahorse.h"

Seahorse::Seahorse()
{
	name = "Seahorse";
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