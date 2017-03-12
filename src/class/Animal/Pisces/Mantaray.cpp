#include "Mantaray.h"

Mantaray::Mantaray()
{
	name = "Mantaray";
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