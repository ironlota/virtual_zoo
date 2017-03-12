#include "Girrafe.h"

Girrafe::Girrafe()
{
	name = "Girrafe";
}

Girrafe::Girrafe(const Girrafe& H) : Mamalia(H)
{
	
}

Girrafe::~Girrafe()
{
	//do nothing
}

Girrafe& Girrafe::operator= (const Girrafe& H)
{
	Mamalia::operator=(H);
}