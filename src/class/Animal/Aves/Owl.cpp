#include "Owl.h"

Owl::Owl()
{
	name = "Owl";
}

Owl::Owl(const Owl& H) : Aves(H)
{
	
}

Owl::~Owl()
{
	//do nothing
}

Owl& Owl::operator= (const Owl& H)
{
	Aves::operator=(H);
}