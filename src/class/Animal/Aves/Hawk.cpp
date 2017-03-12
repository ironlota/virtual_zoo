#include "Hawk.h"

Hawk::Hawk()
{
	name = "Hawk";
}

Hawk::Hawk(const Hawk& H) : Aves(H)
{
	
}

Hawk::~Hawk()
{
	//do nothing
}

Hawk& Hawk::operator= (const Hawk& H)
{
	Aves::operator=(H);
}