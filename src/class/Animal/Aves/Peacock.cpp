#include "Peacock.h"

Peacock::Peacock()
{
	name = "Peacock";
}

Peacock::Peacock(const Peacock& H) : Aves(H)
{
	
}

Peacock::~Peacock()
{
	//do nothing
}

Peacock& Peacock::operator= (const Peacock& H)
{
	Aves::operator=(H);
}