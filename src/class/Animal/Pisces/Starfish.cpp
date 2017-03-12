#include "Starfish.h"

Starfish::Starfish()
{
	name = "Starfish";
}

Starfish::Starfish(const Starfish& H) : Pisces(H)
{
	
}

Starfish::~Starfish()
{
	//do nothing
}

Starfish& Starfish::operator= (const Starfish& H)
{
	Pisces::operator=(H);
}