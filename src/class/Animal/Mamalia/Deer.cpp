#include "Deer.h"

Deer::Deer()
{
	name = "Deer";
}

Deer::Deer(const Deer& H) : Mamalia(H)
{
	
}

Deer::~Deer()
{
	//do nothing
}

Deer& Deer::operator= (const Deer& H)
{
	Mamalia::operator=(H);
}